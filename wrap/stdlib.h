#include <linux/slab.h>

#define malloc(x)	kmalloc(x, GFP_KERNEL)
#define free(x)		kfree(x)
