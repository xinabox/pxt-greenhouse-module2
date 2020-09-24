#ifndef MBED_FATFILEHANDLE_H
#define MBED_FATFILEHANDLE_H

#include "ff.h"
#include "FileHandle.h"

using namespace mbed;

class FATFileHandle : public FileHandle
{
public:
    FATFileHandle(FIL fh);
    virtual int close();
    virtual ssize_t write(const void *buffer, size_t length);
    virtual ssize_t read(void *buffer, size_t length);
    virtual int isatty();
    virtual off_t lseek(off_t position, int whence);
    virtual int fsync();

protected:
    FIL _fh;
};

#endif
