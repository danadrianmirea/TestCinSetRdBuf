// very basic example on how to use set_rdbuf to make cin read from a string
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string input = "4\n5 7 8 2\n";
	istringstream is(input);
	cin.set_rdbuf(is.rdbuf());

	int n;
	cin >> n;
	vector<int> nums;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		nums.push_back(num);
	}

	for (auto elem : nums) {
		cout << elem << endl;
	}


	return 0;
}