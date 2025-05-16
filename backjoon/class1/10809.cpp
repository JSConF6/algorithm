#include <iostream>

using namespace std;

const int MX = 26;
int alpha[MX];

int main(void) {
	string S;
	cin >> S;

	fill(alpha, alpha + MX, -1);

	for (int i = 0; i < S.size(); i++) {
		if (alpha[S[i] - 'a'] == -1)
			alpha[S[i] - 'a'] = i;
	}

	for (int i = 0; i < MX; i++) cout << alpha[i] << " ";

	return (0);
}