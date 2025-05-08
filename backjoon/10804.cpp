#include <iostream>
#include <algorithm>

using namespace std;

int	C[20];
int	I[10][2];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 20; i++)
		C[i] = i + 1;

	for (int i = 0; i < 10; i++) {
		cin >> I[i][0] >> I[i][1];
	}

	for (int i = 0; i < 10; i++) {
		int	start = I[i][0] - 1;
		int	end = I[i][1] - 1;
		while (start < end) {
			swap(C[start], C[end]);
			start++;
			end--;
		}
	}

	for (int i = 0; i < 20; i++)
		cout << C[i] << " ";

	return (0);
}