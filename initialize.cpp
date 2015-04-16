#include <stdio.h>
#include "startProgram.cpp"

float master [4][4];

struct people{

	//credit/debit relationships
	float r_munsi[2];
	float r_danny[2];
	float r_gavin[2];
	float r_preston[2];
	

}munsi, danny, gavin, preston;

void initialize(){

	//initialize master array
	//TODO: pull from txt file later
	//master[][] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	//TODO: initalize relationship based on master for each person




}

int main(){

	//initalize master
	initialize();

	//run the program indefinetly
	startProgram();

	return 0;
}
