/*
 *	Implement the new, preferred macros
 *	You'll need:
 *	   <linux/init.h> (For the macros)
 *	   To understand the convention (static int __init arbitrary(void))
 *         				(__exit)
 *         At the end:
 *            module_init(arbitrary);
 *            module_exit(arbitrary);
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

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

MODULE_LICENSE("GPL");
