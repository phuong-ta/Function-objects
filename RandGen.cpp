#include "RandGen.h"

int RandGen::operator()(){
	int number;
	do {
		number = rand() % max + min; 
	} while(find(numbers.begin(), numbers.end(), number) != numbers.end()); // if found
	
	numbers.push_back(number);
	return number;
}