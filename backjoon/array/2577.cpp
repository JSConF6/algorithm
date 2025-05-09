#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	numArr[10] = {};
	int	multipleNum = 1;

	int	A, B, C;
	cin >> A >> B >> C;

	multipleNum = A * B * C;
	while (multipleNum != 0) {
		numArr[multipleNum % 10]++;
		multipleNum /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << numArr[i] << '\n';

	return (0);
}