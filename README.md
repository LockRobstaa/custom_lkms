# custom_lkms
Learning the dark arts of kernel development via lkms

Once makefile is ran:
- modinfo filename.ko // Displays basic module information
- sudo insmod filename.ko // Inserts module
- sudo lsmod | grep filename_keyword // Displays shiny new module
- sudo rmmod filename // Removes module
- sudo journalctl --since "1 hour ago" | grep kernel

https://sysprog21.github.io/lkmpg/#what-is-a-kernel-module
Stopping point: 4.5 Passing Command Line Arguments to a Module
