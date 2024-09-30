#include <linux/module.h> // Needed by all modules
#include <linux/printk.h> // Needed for pr_info()

int init_module(void)
{
	pr_info("Hello world\n");
	return 0; // Non 0 means init_module failed; module can't be loaded
}

void cleanup_module(void)
{
	pr_info("Goodbye world\n");
}

MODULE_LICENSE("GPL");
