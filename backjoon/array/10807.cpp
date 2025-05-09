#include <iostream>
#include <algorithm>

using namespace std;

int arr[105];
int	N, v, ans = 0;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	cin >> v;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
			ans++;
	}
	cout << ans;
	return (0);
}