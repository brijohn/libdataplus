#ifndef _SYSCALLS_H
#define _SYSCALLS_H

#include <asm.h>

#define FILE_RD   0x1
#define FILE_WR   0x2
#define FILE_RDWR 0x3

DECLARE_SYSCALL(void, sys_dict_info, unsigned long*, char*);

/** String syscalls **/
DECLARE_SYSCALL(unsigned int, sys_strdiff, char*, char*);
DECLARE_SYSCALL(unsigned int, sys_strlen, char*);
DECLARE_SYSCALL(int, sys_strcmp, char*, char*);
DECLARE_SYSCALL(int, sys_strrcmp, char*, char*);
DECLARE_SYSCALL(void*, sys_bzero, void*, int);
DECLARE_SYSCALL(void, sys_strtolower, char*);


/** File syscalls **/
DECLARE_SYSCALL(int, sys_sdformat);
DECLARE_SYSCALL(int, sys_totaldiskspace, char*, unsigned long*); 
DECLARE_SYSCALL(int, sys_freediskspace, char*, unsigned long*);
DECLARE_SYSCALL(int, sys_create, const char*, int);
DECLARE_SYSCALL(int, sys_delete, const char*);
DECLARE_SYSCALL(int, sys_open, const char*, int);
DECLARE_SYSCALL(int, sys_close, int);
DECLARE_SYSCALL(int, sys_get_filesize, int);
DECLARE_SYSCALL(int, sys_seek, int, int, int);
DECLARE_SYSCALL(int, sys_read, int, char*, int);
DECLARE_SYSCALL(int, sys_write, int, const char*, int);
DECLARE_SYSCALL(int, sys_write2, int, const char*, int, int);

#endif
