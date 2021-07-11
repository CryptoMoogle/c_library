# test makefile


test1: main.c func1.c
	$(MAKE) -C dynamic
	$(MAKE) -C static
	gcc -o ./bin/test1 main.c func1.c -I./include/ -L./obj/ -L./bin/ -lstatic -ldynamic

#-L . path of libary
#-l name of libarary minus lib prefix and .a extcl



