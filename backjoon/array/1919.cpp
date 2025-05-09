#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1;
	string str2;
	int	str1Arr[26] = {};
	int	str2Arr[26] = {};
	int str[26] = {};
	int sum = 0;

	cin >> str1 >> str2;

	// for (char c : str1) str1Arr[c - 'a']++;
	// for (char c : str2) str2Arr[c - 'a']++;

	// for (int i = 0; i < 26; i++) {
	// 	if (str1Arr[i] > str2Arr[i])
	// 		sum += str1Arr[i] - str2Arr[i];
	// 	else
	// 		sum += str2Arr[i] - str1Arr[i];
	// }
	// cout << sum;

	for (char c : str1) str[c - 'a']++;
	for (char c : str2) str[c - 'a']--;

	for (int i = 0; i < 26; i++) {
		if (str[i] != 0)
			sum += abs(str[i]);
	}
	cout << sum;

	return (0);
}