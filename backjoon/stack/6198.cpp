#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	stack<int> S;
	long long ans = 0;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (i == 0)
			S.push(x);
		else {
			while (!S.empty() && S.top() <= x)
				S.pop();
			ans += S.size();
			S.push(x);
		}
	}
	cout << ans;
	return (0);
}