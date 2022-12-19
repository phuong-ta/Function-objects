#ifndef RANDGEN_H
#define RANDGEN_H
#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <ctime>
using namespace std;

class RandGen{
	public:
		RandGen(int a, int b):numbers(a, b) {srand(time(NULL)); max =a; min =b;}
		int operator()();
	private:
		int min, max;
		vector<int> numbers;
};

#endif