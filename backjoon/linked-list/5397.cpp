#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

// int main(void) {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int L;
// 	cin >> L;

// 	while (L--) {
// 		string str;
// 		cin >> str;
		
// 		list<char> l;
// 		auto cursor = l.begin();
// 		for (int i = 0; i < str.size(); i++) {
// 			if (str[i] == '<') {
// 				if (cursor != l.begin())
// 					cursor--;
// 			} else if (str[i] == '>') {
// 				if (cursor != l.end())
// 					cursor++;
// 			} else if (str[i] == '-') {
// 				if (cursor != l.begin())
// 					cursor = l.erase(--cursor);
// 			} else
//				l.insert(cursor, str[i]);
// 		}
// 		for (auto c : l) cout << c;
// 		cout << '\n';
// 	}

// 	return (0);
// }

const int MX = 10000000;
char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;

void insert(int addr, char ch) {
	dat[unused] = ch;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];
	if (nxt[addr] != -1) pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	unused++;
}

void erase(int addr) {
	nxt[pre[addr]] = nxt[addr];
	if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
	int cur = nxt[0];
	while (cur != -1) {
		cout << dat[cur];
		cur = nxt[cur];
	}
	cout << '\n';
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int L;
	cin >> L;

	while (L--) {
		fill(dat, dat + MX, -1);
		fill(pre, pre + MX, -1);
		fill(nxt, nxt + MX, -1);
		string str;
		cin >> str;

		int cursor = 0;
		for (auto c : str) {
			if (c == '<') {
				if (pre[cursor] != -1)
					cursor = pre[cursor];
			} else if (c == '>') {
				if (nxt[cursor] != -1)
					cursor = nxt[cursor];
			} else if (c == '-') {
				if (pre[cursor] != -1) {
					erase(cursor);
					cursor = pre[cursor];
				}
			} else {
				insert(cursor, c);
				cursor = nxt[cursor];
			}
		}
		traverse();
	}

	return (0);
}