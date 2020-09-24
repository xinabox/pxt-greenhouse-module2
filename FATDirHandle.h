   #ifndef MBED_FATDIRHANDLE_H
   #define MBED_FATDIRHANDLE_H

   #include "ff.h"
   #include "DirHandle.h"

   using namespace mbed;

   class FATDirHandle : public DirHandle
   {

   public:
      FATDirHandle(const FATFS_DIR &the_dir);
      virtual int closedir();
      virtual struct dirent *readdir();
      virtual void rewinddir();

   private:
      FATFS_DIR dir;
      struct dirent cur_entry;
   };

   #endif
