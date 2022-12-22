#### CSE231 - Operating Systems

## Assignment2 - Question2 - Kernel memory copy 

#### What To Submit

- Diff File 
- Sample Program to Test System Call
- This Readme/Writeup

#### SysCall Program Logic

```C
//Defining new Syscall in the kernel. 
SYSCALL_DEFINE2(kernel_2d_memcpy, float**, matrix1, float**, matrix2)
{
 	float mat[2][2];
 	long temp_matrix = __copy_from_user(mat, matrix1, sizeof(mat));
 	long return_matrix = __copy_to_user(matrix2, mat, sizeof(mat));
 
 	if (temp_matrix<0)
 	    return -EFAULT;
 
 	if (return_matrix<0)
 		return -EFAULT;
 
 	printk(KERN_INFO "Kernel_2d_memcpy syscall executed");
 
 	return temp_matrix;
 }
```
- We define a Syscall in the sys.c file located at linux-6.0.9newnew/kernel/ in the new kernel files that you want to add the syscall to. 

- Defining the function as SYSCALL_DEFINE'K'(name_of_the_syscall, argument1, argument2,...,argumentk) where K is the number of arguments that will be passed/provided to this syscall by the user/callee and name is the function that will be called in a code. 

- For the given syscall to implement. We give it the name kernel_2d_memcpy, pass two double pointers pointing to 2 matrix on which we want to perform the operation. 
  
- Using the __copy_from_user() and __copy_to_suer() syscalls we copy the given matrix to new defined matrix mat. As error handling we return -EFAULT if the temp and return matrix size comes out negative. 
  
- Printing Successful execution as Kernel info using printk(KERN_INFO"message"). Later Returning the temp_matrix that was needed


### Compiling the Kernel

- Using the Linux Kernel 6.0.9 to compile the syscall into. 
- Following Commands to compile the linux kernel and adding it to the grub boot menu to access the new kernel. 
```bash
cd linux-6.0.9
make mrproper
wget filedownloadlink
cp filename .config
make menuconfig /-> esc then escape/
make -j2
make modules_install
cp -v arch/x86_64/boot/bzImage /boot/vmlinuz-linuxAssign2
mkinitcpio -k 6.0.9 -g /boot/initramfs-linuxAssign2.img
cp System.map /boot/System.map-linuxAssign2
cp /boot/System.map-linuxAssign2 System.map
grub-mkconfig -o /boot/grub/grub.cfg
update-grub
```


### Creating the Diff File. 
- The following command creates the diff file which we can save as filename.patch.
```bash
diff linux-6.0.9orig linux-6.0.9newnew > filename.patch
```