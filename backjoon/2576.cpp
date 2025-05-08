#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	input[7];
	int sum = 0;
	int	min = 9999999;

	for (int i = 0; i < 7; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < 7; i++) {
		if (input[i] % 2 == 1)
		{
			sum += input[i];
			min = min > input[i] ? input[i] : min;
		}
	}
	if (sum == 0)
		cout << -1;
	else {
		cout << sum << "\n";
		cout << min;
	}

	return (0);
}