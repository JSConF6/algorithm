#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int ans = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		ans += str[i] - 48;
	}
	cout << ans;

	return (0);
}