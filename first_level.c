#include <linux/init.h> 
#include <linux/module.h> 

static int __init level_init(void) { 
        pr_info("It is over 9000!\n");
        return 0; 
}

static void __exit level_exit(void) {     
        pr_info("What? 9000?\n"); 
}

module_init(level_init); 
module_exit(level_exit); 
MODULE_AUTHOR("michel"); 
MODULE_LICENSE("GPL"); 
