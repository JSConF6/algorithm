#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	input[9];
	int	maxNum = 0;
	int maxIndex = 0;

	int	x;

	for (int i = 0; i < 9; i++) {
		cin >> x;
		if (maxNum < x) {
			maxNum = x;
			maxIndex = i + 1;
		}
	}

	cout << maxNum << "\n";
	cout << maxIndex;

	return (0);
}