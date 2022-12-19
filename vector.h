#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <ctime>
using namespace std;

void handlVector(vector<int> &lotto){
	ostream_iterator<int> out_it (cout," ");
	copy ( lotto.begin(), lotto.end(), out_it ); 
	sort(lotto.begin(), lotto.end());
}
void printMatchingNumber(vector<int> &result){
	ostream_iterator<int> out_it (cout," ");
	size_t index = 0;
    for_each(result.begin(), result.end(), [&index] (int &i) {
        cout << "#" << index+1 << ": " << i << endl;
        ++index;
    });
}