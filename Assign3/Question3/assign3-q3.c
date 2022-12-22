// kernel module to show the process information

#include <linux/init.h>

static int _init_hello(void)
{
    struct task_struct *task;
    for_each_process(task)
    {
        printk(KERN_INFO "Current Process: %s, %d, %ld", task->comm, task->pid, task->state);
        printk(KERN_INFO "Process Name: %s, Process ID: %d, Process State: %ld", task->comm, task->pid, task->state);
    }
    return 0;
}

static void cleanup_hello(void)
{
    printk(KERN_INFO "Cleaning up module.\n");
}

int main(){
    _init_hello();
    cleanup_hello();
    return 0;
}


