// Basic stuff from high school

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int maxim(vector<int> v) {

	static int maxim = 0;

	for_each(begin(v), end(v), [](int element)
		{ if (element > maxim)
		maxim = element; });

		cout << "Max from vector is  "<<maxim<<"\n";

		return 0;

}

vector<int> declare_and_insert_elements_vector(int i) {

	vector<int> vectorul;

	for (int j = 0; j < i; j++)
	{
		vectorul.push_back(j);
	}

	return vectorul;
}