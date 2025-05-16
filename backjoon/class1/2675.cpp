#include <iostream>

using namespace std;

int main(void) {
	int T;
	cin >> T;
	while (T--) {
		int R;
		cin >> R;
		string S;
		cin >> S;
		string str;
		for (int i = 0; i < S.size(); i++) {
			for (int j = 0; j < R; j++) {
				str += S[i];
			}
		}
		cout << str << '\n';
	}

	return (0);
}