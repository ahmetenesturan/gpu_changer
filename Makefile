default: build

build:
	gcc main.c -o gpu
clean:
	rm gpu
install:
	mv -f gpu /usr/bin/gpu
uninstall:
	rm /usr/bin/gpu