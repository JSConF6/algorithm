#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	input[9];
	int	sum = 0;
	int	L, M = 0;

	for (int i = 0; i < 9; i++) {
		cin >> input[i];
		sum += input[i];
	}
	sort(input, input + 9);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++) {
			if (sum - (input[i] + input[j]) == 100) {
				L = i;
				M = j;
				break;		
			}
		}
		if (L != 0 && M != 0)
			break;
	}

	for (int i = 0; i < 9; i++) {
		if (i != L && i != M)
			cout << input[i] << "\n";
	}

	return (0);
}