
#include <sys/iosupport.h>
#include <stdint.h>

extern uint32_t ebss, sbss, edata, sdata, etext;

extern void __libexword_exit(int status);
extern void * __libexword_sbrk_r(struct _reent *ptr, ptrdiff_t incr);
extern void * __libexword_malloc(size_t size);
extern void __libexword_free(void *ptr);

static void __copy_data()
{
	uint32_t *bss, *data;
	uint32_t *text = &etext;
	for (bss = &sbss; bss < &ebss; ++bss) {
		*bss = 0;
	}

	for (data = &sdata; data < &edata; ++data) {
		*data = *text++;
	}
}

static void __init_syscall_array()
{
	__syscalls.sbrk_r = __libexword_sbrk_r;
	__syscalls.lock_init = NULL;
	__syscalls.lock_close = NULL;
	__syscalls.lock_release = NULL;
	__syscalls.lock_acquire = NULL;
	__syscalls.malloc = __libexword_malloc;
	__syscalls.free = __libexword_free;
	__syscalls.exit = __libexword_exit;
	__syscalls.gettod_r = NULL;
}

int __libc_cleanup_hook(void * ptr) {
	__console_cleanup();

	return -3;
}

int __libc_init_hook(void *ptr) {

	__copy_data();

	__init_syscall_array();	

	__console_init();
	__fs_init();
	return -3;

}

