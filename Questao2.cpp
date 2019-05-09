#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main ()
{
	vector<int> vec1 (15);

	for (int i = 0; i < vec1.size(); i++)
	{	
		vec1[i] = pow(2,i);
	}

	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << endl;

	return 0;
}
