#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int K;
	cin >> K;
	stack<int> S;
	while (K--) {
		int x;
		cin >> x;
		if (x == 0) S.pop();
		else S.push(x);
	}
	int result = 0;
	while (!S.empty()) {
		result += S.top();
		S.pop();
	}
	cout << result;

	return (0);
}