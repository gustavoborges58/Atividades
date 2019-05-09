#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main ()
{
	vector<int> vec1 (10);
	vector<int>::iterator it;

	//vec1 = {0, 1, 0, 5, 0, 9, 0, 13, 0, 17}
	for (int i = 0; i < vec1.size(); i++)
	{
		it = vec1.begin();
		if (i%2 == 1)
		{
			vec1.insert(it + i, i+(i-1));
			cout << "size: " << vec1.size() << endl;
		}
	}
	
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << " ";
	cout << endl;

	return 0;
}
