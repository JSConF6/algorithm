#include <iostream>

using namespace std;

int main(void) {
	string str;
	getline(cin, str);
	int ans = 0;
	int flag = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ' && str.size() == 1)
			break;
		if (str[i] == ' ' && flag == 1) {
			ans++;
			flag = 0;
		} else {
			flag = 1;
		}
	}
	if (flag == 1)
		ans++;
	cout << ans;

	return (0);
}