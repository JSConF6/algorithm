#include <iostream>
#include <algorithm>

using namespace std;

int	N;
string strArr[1005][2];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// cin >> N;
	// for (int i = 0; i < N; i++) {
	// 	string str1;
	// 	string str2;
	// 	cin >> str1 >> str2;
	// 	strArr[i][0] = str1;
	// 	strArr[i][1] = str2;
	// }

	// for (int i = 0; i < N; i++) {
	// 	int	check = 0;
	// 	string str1 = strArr[i][0];
	// 	string str2 = strArr[i][1];
	// 	int	arr1[26] = {};
	// 	int	arr2[26] = {};
	// 	for (int j = 0; j < str1.size(); j++)
	// 		arr1[str1[j] - 'a']++;
	// 	for (int k = 0; k < str2.size(); k++)
	// 		arr2[str2[k] - 'a']++;
	// 	for (int j = 0; j < 26; j++) {
	// 		if (arr1[j] != arr2[j]) {
	// 			check = 1;
	// 			break;
	// 		}
	// 	}
	// 	if (check == 1)
	// 		cout << "Impossible" << '\n';
	// 	else
	// 		cout << "Possible" << '\n';
	// }

	int N;
	cin >> N;
	while (N--) {
		int a[26] = {};
		string s1, s2;
		cin >> s1 >> s2;

		for (auto c : s1) a[c-'a']++;
		for (auto c : s2) a[c-'a']--;

		bool isPossible = true;
		for (int i : a){
		if (i != 0) isPossible = false;
		}

		if(isPossible) cout << "Possible\n";
		else cout << "Impossible\n";
	}

	return (0);
}