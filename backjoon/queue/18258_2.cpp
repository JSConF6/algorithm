#include <iostream>

using namespace std;

const int MX = 2000005;
int dat[MX];
int head = 0, tail = 0;

int size(void) {
	return (tail - head);
}

int empty(void) {
	if (size() == 0)
		return (1);
	return (0);
}

void push(int x) {
	dat[tail++] = x;
}

void pop(void) {
	head++;
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
		if (cmd == "push") {
			int x;
			cin >> x;
			push(x);
		} else if (cmd == "pop") {
			if (empty()) cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop();
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