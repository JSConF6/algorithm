#include <iostream>

using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

int size(void) {
	return (tail - head);
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

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) push(i);

	while (size() != 1) {
		pop();
		push(front());
		pop();
	}
	cout << front();

	return(0);
}