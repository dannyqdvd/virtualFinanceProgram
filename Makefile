
main : Makefile
	g++ initialize.cpp -o main 

run : main
	./main

test : run

clean : 
	rm -f *.o
	rm -f main
