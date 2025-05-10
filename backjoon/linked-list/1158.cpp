#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	list<int> L;
	for (int i = 1; i <= N; i++) L.push_back(i);

	auto t = L.begin();
	int i = 1;
	cout << '<';
	while (1) {
		if (i % K == 0) {
			if (L.front() == L.back())
				cout << *t;
			else
				cout << *t << ", ";
			if (*t == L.back()) {
				t = L.erase(t);
				t = L.begin();
			} else
				t = L.erase(t);
		} else {
			if (*t == L.back())
				t = L.begin();
			else
				t++;
		}
		if (L.empty())
			break;
		i++;
	}
	cout << '>';

	return (0);
}