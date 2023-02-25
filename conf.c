#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Erkebulan Sintikov ");
MODULE_DESCRIPTION("Hello World");

static int __init init_module(void)
{
    printk(KERN_INFO "Hello World\n");
    return 0;
}

static void __exit cleanup_module(void)
{
    printk(KERN_INFO "Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);
