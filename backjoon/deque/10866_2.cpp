#include <iostream>

using namespace std;

const int MX = 10005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

int size(void) {
	return (tail - head);
}

int empty(void) {
	if (size() == 0)
		return (1);
	return (0);
}

void push_front(int x) {
	dat[--head] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}

void pop_front(void) {
	head++;
}

void pop_back(void) {
	tail--;
}

int front(void) {
	return (dat[head]);
}

int back(void) {
	return (dat[tail - 1]);
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	while (N--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push_front") {
			int X;
			cin >> X;
			push_front(X);
		} else if (cmd == "push_back") {
			int X;
			cin >> X;
			push_back(X);
		} else if (cmd == "pop_front") {
			if (empty()) cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop_front();
			}
		} else if (cmd == "pop_back") {
			if (empty()) cout << -1 << '\n';
			else {
				cout << back() << '\n';
				pop_back();
			}
		} else if (cmd == "size") {
			cout << size() << '\n';
		} else if (cmd == "empty") {
			cout << empty() << '\n';
		} else if (cmd == "front") {
			if (empty()) cout << -1 << '\n';
			else cout << front() << '\n';
		} else if (cmd == "back") {
			if (empty()) cout << -1 << '\n';
			else cout << back() << '\n';
		}
	}

	return (0);
}