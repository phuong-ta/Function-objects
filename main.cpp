#include <iostream>
#include "RandGen.h"
#include "vector.h"

int main(int argc, char** argv) {
	vector<int> lotto(7), viking(6), eurojackpot(5);
	RandGen Lotto = RandGen(40, 10);
	RandGen Viking = RandGen(48, 1);
	RandGen Eurojackpot = RandGen(50, 1);
	vector<int> result1, result2;
	// create lotto
	cout<<"Lotto: ";
	generate(lotto.begin(), lotto.end(), Lotto);
	handlVector(lotto);
	
	// create viking
	cout<<"\nViking: ";
	generate(viking.begin(), viking.end(), Viking);
	handlVector(viking);
	
	// first matching
	set_intersection(lotto.begin(), lotto.end(), viking.begin(), viking.end(), back_inserter(result1));
	cout<<"\nMatching numbers: \n";
	printMatchingNumber(result1);

    // create eurojackpot
	cout<<"\nEurojackpot: ";
	generate(eurojackpot.begin(), eurojackpot.end(), Eurojackpot);
	handlVector(eurojackpot); 
	
	// second matching
	set_intersection(result1.begin(), result1.end(), eurojackpot.begin(), eurojackpot.end(), back_inserter(result2));
	cout<<"\nMatching numbers in three sets: \n";
    printMatchingNumber(result2);

	return 0;
}