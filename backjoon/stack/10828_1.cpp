#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

stack<int> S;

void print(int x) {
	cout << x << '\n';
}

int empty() {
	if (S.empty())
		return (1);
	return(0);
}

int size() {
	return (S.size());
}

void push(int x) {
	S.push(x);
}

void pop() {
	if (empty()) {
		print(-1);
		return;
	}
	print(S.top());
	S.pop();
}

void top() {
	if (empty()) {
		print(-1);
		return ;
	}
	print(S.top());
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