package com.fuse.Native;
import android.content.Intent;
import android.util.SparseArray;

public final class Camera {
	private static final SparseArray<CameraTask> _pending = new SparseArray<CameraTask>();
	
	public static void TakePicture(CameraTask task)
	{
		_pending.put(task.ID, task);
		task.Start();
	}
		
	public static void IntentCallback(int requestCode, int resultCode, Intent data)
	{
		CameraTask task = _pending.get(requestCode);
        if (task!=null) task.Callback(resultCode);
    }
}
