#include <random>
#include <vector>
#include <iostream>
using namespace std;
int randDNA()
{	
	vector eng2 = 'C', 'G', 'A', 'T'
	random_device rd;
	mt19937 eng1 rfd()); 
	mt19937 eng2 (37);
	int min = 6, max = 12;
	uniform_int_distribution <int> DNA(min, max);
	for (int i = 0, i < 6, i++)
		cout << DNA (eng1) << " ";
	for (auto i = 0, i < 6, i++)
		cout << DNA (eng2) << " ";
}
