#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	arr[10] = {};
	int	max = 0;

	int	N;
	cin >> N;

	while (1) {
		if (N % 10 == 6 || N % 10 == 9)
			arr[6]++;
		else
			arr[N % 10]++;
		N /= 10;
		if (N == 0)
			break;
	}

	if (arr[6] % 2 == 0)
		arr[6] /= 2;
	else
		arr[6] = (arr[6] / 2) + 1;
	for (int i : arr) {
		if (max < i)
			max = i;
	}
	cout << max;

	return (0);
}