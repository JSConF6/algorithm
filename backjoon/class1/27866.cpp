#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;
	int i;
	cin >> i;
	cout << str[i - 1];

	return (0);
}