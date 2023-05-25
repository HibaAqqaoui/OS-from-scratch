# OS-from-scratch
AlgorithMan-de Operating system from scratch, print from scratch working code for WSL.  

Steps to run your own operating system:

Make a "myos" directory in your linux terminal $ mkdir myos

Create the respective files in "myos" directory $ cd myos $ nano filename (ctrl+O ENTER to save, ctrl+X to exit GNU editor)

Make object files: $ Make Kernel.o, $ Make loader.o

Make mykernel.bin after istalling Qemu: 
$ sudo apt install qemu-system-x86
$ qemu-system-i386 -kernel mykernel.bin

Create an image of the OS: 
$ dd if=/dev/zero of=os-image.bin bs=1M count=64
$ dd if=mykernel.bin of=os-image.bin conv=notrunc

Boot your system: $ qemu-system-i386 -kernel os-image.bin -curses
