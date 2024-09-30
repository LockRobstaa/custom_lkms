/*
 * Illustrating __initdata macro
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int one_int __initdata = 1;
static int nine_int __initdata = 9;

static int __init arbitrary_init(void)
{
	pr_info("I am %d%d years old!\n", one_int, nine_int);
	return 0;
}

static void __exit arbitrary_exit(void)
{
	pr_info("[!] Closing modules younger than 20\n");
}

module_init(arbitrary_init);
module_exit(arbitrary_exit);

MODULE_LICENSE("GPL");
