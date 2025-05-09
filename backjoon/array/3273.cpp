#include <iostream>
#include <algorithm>

using namespace std;

int arr[2000005];
int arr2[2000005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n, x;
	int	ans = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;

	for (int i = 0; i < n; i++) {
		if (x - arr[i] > 0 && arr2[x - arr[i]] == 1)
			ans++;
		arr2[arr[i]] = 1;
	}
	cout << ans;
	return (0);
}