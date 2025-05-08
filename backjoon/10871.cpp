#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, X;
	int	num;

	cin >> N >> X;

	while (N--) {
		cin >> num;
		if (num < X)
			cout << num << " ";
	}

	return (0);
}