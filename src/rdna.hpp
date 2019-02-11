#include <random>
#include <iostream>
using namespace std;
int main()
 
{	
	vector <char> mt;
	vector <int> (eng1 = r d, eng2 = {'C', 'G', 'A', 'T'})
	random_device r d;
	mt19937 eng1 (rd());
	mt19937 eng2 ('C', 'G', 'A', 'T');
	int min = 6, max = 12;
	uniform_int_distribution <int> DNA(min, max);
	for (int i = 0, i <6, i++)
		cout << DNA (eng1) << " ";
	for (auto i = 0, i <6, i++)
		cout << DNA (eng2) << " ";
}
