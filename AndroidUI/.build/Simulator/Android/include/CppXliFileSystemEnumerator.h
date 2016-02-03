#ifndef __CPP_XLI_FILE_SYSTEM_ENUMERATOR_H__
#define __CPP_XLI_FILE_SYSTEM_ENUMERATOR_H__

#include <Xli/FileSystem.h>

class CppXliFileSystemEnumerator: public Xli::Object
{
public:
    Xli::Array<Xli::FileInfo> Files;
    int Index;

    CppXliFileSystemEnumerator()
    {
    	Index = -1;
    }
};


#endif
