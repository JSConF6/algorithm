#include <iostream>
#include <algorithm>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void print(int x) {
	cout << x << '\n';
}

int size() {
	return (pos);
}

int empty() {
	if (size() == 0)
		return (1);
	return(0);
}

void top() {
	if (empty()) {
		print(-1);
		return ;
	}
	print(dat[pos - 1]);
}

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	if (empty()) {
		print(-1);
		return;
	}
	top();
	pos--;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			push(x);
		} else if (str == "pop")
			pop();
		else if (str == "size")
			print(size());
		else if (str == "empty")
			print(empty());
		else if (str == "top")
			top();
	}

	return (0);
}