package com.fuse.Native;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.media.ExifInterface;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.util.Pair;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

import static java.lang.Math.*;

public abstract class CameraTask
{
	private static int _id = 0;
	public final int ID;
	private int _targetWidth;
	private int _targetHeight;
	private boolean _correctOrientation;
	private File _file;
	private String _path;


	//Uno Interface
	public abstract void OnSuccess(String path);
	public abstract void OnFailed(String message);

	public final Uri getURI() { return Uri.fromFile(_file); }

	public CameraTask(int targetWidth, int targetHeight, boolean correctOrientation)
	{
		ID = (_id += 1);
		_targetWidth = targetWidth;
		_targetHeight = targetHeight;
		_correctOrientation = correctOrientation;
		_file = createImageFile(ID);
		if (_file == null) {
			OnFailed("Failed to make image file");
		}
	}

	//
	void Start()
	{
		Activity a = com.Android_UI.Android_UI.GetRootActivity();
		Intent takePictureIntent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
		Bundle bdl = new Bundle();
		bdl.putParcelable(MediaStore.EXTRA_OUTPUT, Uri.fromFile(_file));
		takePictureIntent.putExtras(bdl);
		a.startActivityForResult(takePictureIntent, ID);
	}

	void Callback(int resultCode)
	{
		if (resultCode == Activity.RESULT_OK) {
			File newFile = resizeAndSaveImageFile();
			if (newFile!=null) {
				OnSuccess(Uri.fromFile(newFile).getPath());
			} else {
				OnFailed("Image Capture Failed on Resize");
			}
			_file.delete();
		} else if (resultCode == Activity.RESULT_CANCELED) {
			OnFailed("User cancelled the image capture");
		} else {
			OnFailed("Image capture failed");
		}
	}

	private Pair<Integer, Integer> GetAspectCorrectedSize(int width, int height)
	{
		if (_targetWidth<0 && _targetHeight<0)
			return new Pair<Integer, Integer>(width, height);

		float ratio = 1;

		float targetWidth = (float)_targetWidth;
		float targetHeight = (float)_targetHeight;

		if (_targetWidth >= 0 && _targetHeight < 0)
		{
			float origRatio = height / (float)width;
			targetHeight = targetWidth * origRatio;
		}
		else if (_targetWidth < 0 && _targetHeight >= 0)
		{
			float origRatio = width / (float)height;
			targetWidth = targetHeight * origRatio;
		}

		float w = width;
		float h = height;

		if (w > _targetWidth){
			ratio = targetWidth / (float)width;
			w = targetWidth;
			h = h * ratio;
		}

		if (h > _targetHeight){
			ratio = targetHeight / (float)height;
			w = width * ratio;
			h = targetHeight;
		}

		return new Pair<Integer, Integer>((int)w, (int)h);
	}

	// static helpers

	private File resizeAndSaveImageFile()
	{
		try {
			File destination = createImageFile((_id += 1));
			FileOutputStream out = new FileOutputStream(destination);

			Bitmap bm = DecodeImageToBitmap();
			Bitmap resizedBM;

			if (_targetWidth<0 && _targetHeight<0 && !_correctOrientation) {
				resizedBM = bm;
			} else {
				int w = bm.getWidth();
				int h = bm.getHeight();
				resizedBM = getResizedBitmap(bm);
				bm.recycle();
			}
			int newBMWidth = resizedBM.getWidth();
			int newBMHeight = resizedBM.getHeight();

			resizedBM.compress(Bitmap.CompressFormat.JPEG, 90, out);
			out.flush();
			out.close();
			resizedBM.recycle();
			return destination;
		} catch (Exception e) {
			Log.d("XliApp", e.getMessage());
			return null;
		}
	}

	private Bitmap DecodeImageToBitmap()
	{
		BitmapFactory.Options bmOptions = new BitmapFactory.Options();
		bmOptions.inJustDecodeBounds = false;
		bmOptions.inPurgeable = true;

		return BitmapFactory.decodeFile(_file.getAbsolutePath(), bmOptions);
	}

	private Bitmap getResizedBitmap(Bitmap bm) {
		int origWidth = bm.getWidth();
		int origHeight = bm.getHeight();
		Pair<Integer, Integer> size = GetAspectCorrectedSize(origWidth,origHeight);
		int newWidth = size.first;
		int newHeight = size.second;

		float scaleWidth = ((float) newWidth) / (float)origWidth;
		float scaleHeight = ((float) newHeight) / (float)origHeight;
		Matrix matrix = new Matrix();

		int rotationDegrees = 0;
		if (_correctOrientation)
		{
			ExifInterface exif = null;
			try {
				exif = new ExifInterface(_file.getAbsolutePath());
				int orientation = exif.getAttributeInt(ExifInterface.TAG_ORIENTATION,
													   ExifInterface.ORIENTATION_UNDEFINED);


				switch (orientation) {
				case ExifInterface.ORIENTATION_FLIP_HORIZONTAL:
					//scaleWidth *= -1;
					break;
				case ExifInterface.ORIENTATION_ROTATE_180:
					rotationDegrees= 180;
					break;
				case ExifInterface.ORIENTATION_FLIP_VERTICAL:
					rotationDegrees = 180;
					//scaleWidth *= -1;
					break;
				case ExifInterface.ORIENTATION_TRANSPOSE:
					rotationDegrees = 90;
					//scaleWidth *= -1;
					break;
				case ExifInterface.ORIENTATION_ROTATE_90:
					rotationDegrees = 90;
					break;
				case ExifInterface.ORIENTATION_TRANSVERSE:
					rotationDegrees = -90;
					//scaleWidth *= -1;
					break;
				case ExifInterface.ORIENTATION_ROTATE_270:
					rotationDegrees = -90;
					break;
				}
			} catch (IOException e) {}
			matrix.preRotate(rotationDegrees);
		}

		matrix.postScale(scaleWidth, scaleHeight);
		return Bitmap.createBitmap(bm, 0, 0, origWidth, origHeight, matrix, false);
		//return Bitmap.createScaledBitmap(bm, newWidth, newHeight, false);
	}

	private File createImageFile(int id)
	{
		try {
			String fileName = "JPEG_" + id + "_";
			String ext = ".jpg";
			File storageDir = com.Android_UI.Android_UI.GetRootActivity().getExternalFilesDir(null);
			File photoFile = File.createTempFile(fileName, ext, storageDir);
			_path = photoFile.getAbsolutePath();
			return photoFile;
		} catch (Exception ex) {
			return null;
		}
	}
}
