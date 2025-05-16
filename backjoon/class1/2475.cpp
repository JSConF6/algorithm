#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans = 0;
	for (int i = 0; i < 5; i++) {
		int x;
		cin >> x;
		ans += x * x;
	}

	cout << ans % 10;

	return (0);
}