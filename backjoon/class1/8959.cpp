#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int O = 0;
		int ans = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'O')
				ans += ++O;
			else
				O = 0;
		}
		cout << ans << '\n';
	}
	
	return (0);
}