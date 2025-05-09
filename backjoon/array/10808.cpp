#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int alpha[26];
	string str;
	cin >> str;

	fill(alpha, alpha + 26, 0);
	// for (int i  = 0; i < str.size(); i++) {
	// 	int	low1 = 'z' - 'a';
	// 	int	low2 = 'z' - str[i];
	// 	alpha[low1 - low2]++;
	// }
	for (int i = 0; i < str.size(); i++)
		alpha[str[i] - 'a']++;

	for (int i  = 0; i < 26; i++)
		cout << alpha[i] << " ";

	return (0);
}