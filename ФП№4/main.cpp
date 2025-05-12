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
	vector<int> V{ -175, 579, 148, 47,-1};
	function<bool(int, int)> Func = less_abs();
	sort(V.begin(), V.end(), Func);
	for_each(V.begin(), V.end(), [](int num) { cout << num << " "; });

	return 0;
}