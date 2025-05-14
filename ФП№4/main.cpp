#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

struct less_abs
{
	bool operator() (int a, int b) const
	{
		return abs(a) < abs(b);
	}
};

int main()
{
	vector<int> V;
	cout << " Enter numbers: ";
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(V));

	function<bool(int, int)> Func = less_abs();
	sort(V.begin(), V.end(), Func);

	cout << " Result: ";
	for_each(V.begin(), V.end(), [](int num) { cout << num << " "; });

	return 0;
}