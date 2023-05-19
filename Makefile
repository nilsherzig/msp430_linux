compile: 
	msp430-elf-gcc -mmcu=msp430g2553 -o current UART_411.c

run: 
	sudo mspdebug tilib "prog current" 

connect: 
	TERM=xterm sudo screen /dev/ttyACM1 9600

all: 
	make compile 
	make run 
	make connect
