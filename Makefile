obj-m += lkm_helloworld_1_0.o
obj-m += lkm_helloworld_1_1.o
obj-m += lkm_helloworld_1_2.o

PWD := $(shell pwd)
CC := gcc-13

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

