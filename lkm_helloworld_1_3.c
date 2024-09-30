/*
 *	Module documentation example
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LockRobstaa");
MODULE_DESCRIPTION("In the end, I still did not comprehend a thing.");

static int __init start_module(void)
{
	pr_info("Hello Darkness");
	return 0;
}

void __exit cleaner_module(void)
{
	pr_info("Goodbye Darkness");
}

module_init(start_module);
module_exit(cleaner_module);
