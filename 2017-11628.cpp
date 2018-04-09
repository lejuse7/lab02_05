#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
int num;

void main()
{
	vector<int> NumberList;
	while (cin>>num)
	{
		NumberList.push_back(num);
	}

	std::sort(NumberList.begin(), NumberList.end(), std::greater<int>());

	cout << "ordered array" << endl;
	for (auto i : NumberList)
	{
		cout << i << " ";
	}
	cout << endl;
}