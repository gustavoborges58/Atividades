#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> vec1;
	vector<int>::iterator it;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i+1);
    }

    while (!vec1.empty())
    {
        for (int  i = 0; i < vec1.size(); i++)
        {
            cout << vec1[i] << " ";
        }
        vec1.pop_back();
        cout << endl;
    }

	return 0;
}
