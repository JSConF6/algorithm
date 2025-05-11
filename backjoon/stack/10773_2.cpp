#include <iostream>

using namespace std;

const int MX = 100005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop(void) {
	pos--;
}

int size(void) {
	return (pos);
}

int empty(void) {
	if (size() == 0)
		return (1);
	return (0);
}

int top(void) {
	return (dat[pos - 1]);
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int K;
	cin >> K;
	while (K--) {
		int x;
		cin >> x;
		if (x == 0) pop();
		else push(x);
	}
	int result = 0;
	while (!empty()) {
		result += top();
		pop();
	}
	cout << result;

	return (0);
}