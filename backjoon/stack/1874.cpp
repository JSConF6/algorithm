#include <iostream>
#include <stack>

using namespace std;

// const int MX = 100005;
// stack<int> S;
// int n[MX];
// char ans[MX];
// int idx = 0;
// int ansIdx = 0;

// int main(void) {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N;
// 	cin >> N;
// 	for (int i = 0; i < N; i++) {
// 		int x;
// 		cin >> x;
// 		n[i] = x;
// 	}

// 	int flag = 0;
// 	int i = 0;
// 	while (1) {
// 		if (!S.empty() && (S.top() == n[idx])) {
// 			S.pop();
// 			ans[ansIdx++] = '-';
// 			idx++;
// 		} else {
// 			if (i == N)
// 				break;
// 			S.push(i + 1);
// 			ans[ansIdx++] = '+';
// 			i++;
// 		}
// 	}

// 	while (!S.empty()) {
// 		if (S.top() != n[idx]) {
// 			flag = 1;
// 			break;
// 		}
// 		S.pop();
// 		ans[ansIdx++] = '-';
// 	}

// 	if (flag) cout << "NO" << '\n';
// 	else for (int i = 0; i < ansIdx; i++) cout << ans[i] << '\n';

// 	return (0);
// }

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  stack<int> S;
  int cnt = 1;
  string ans;
  while (n--) {
    int t;
    cin >> t;
    while (cnt <= t) {
      S.push(cnt++);
      ans += "+\n";
    }
    if (S.top() != t) {
      cout << "NO\n";
      return 0;
    }
    S.pop();
    ans += "-\n";
  }
  cout << ans;
}