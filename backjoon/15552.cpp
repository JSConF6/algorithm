#include <iostream>
#include <algorithm>

using namespace std;

int	N, A = 0, B = 0;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	while (N--) {
		cin >> A >> B;
		cout << A + B << "\n";
	}

	return (0);
}