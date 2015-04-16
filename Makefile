
main : initialize.o  Makefile
	g++ initialize.cpp

run : main
	./a.out

test : run
