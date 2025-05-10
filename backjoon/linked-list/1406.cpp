#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

// int main(void) {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	list<char> C;

// 	string str;
// 	cin >> str;
// 	for (char c : str)
// 		C.push_back(c);
// 	auto t = C.end();

// 	int M;
// 	cin >> M;
// 	while (M--) {
// 		char cmd;
// 		cin >> cmd;
// 		if (cmd == 'L') {
// 			if (t != C.begin())
// 				t--;
// 		}
// 		else if (cmd == 'D') {
// 			if (t != C.end())
// 				t++;
// 		}
// 		else if (cmd == 'B') {
// 			if (t != C.begin())
// 				t = C.erase(--t);
// 		}
// 		else if (cmd == 'P') {
// 			char c;
// 			cin >> c;
// 			C.insert(t, c);
// 		}
// 	}
// 	for (auto c : C) cout << c;

// 	return (0);
// }

// const int MX = 1000005;

// char dat[MX];
// int	pre[MX], nxt[MX];
// int unused = 1;
// int curr = 0;

// void insert(int addr, char c) {
// 	dat[unused] = c;
// 	pre[unused] = addr;
// 	nxt[unused] = nxt[addr];
// 	if (nxt[addr] != -1) pre[nxt[addr]] = unused;
// 	nxt[addr] = unused;
// 	curr = unused;
// 	unused++;
// }

// void erase(int addr) {
// 	curr = pre[addr];
// 	nxt[pre[addr]] = nxt[addr];
// 	if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
// 	// unused--;
// }

// void traverse() {
// 	int cur = nxt[0];
// 	while (cur != -1) {
// 		cout << dat[cur];
// 		cur = nxt[cur];
// 	}
// 	cout << '\n';
// }

// int main(void) {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	fill(dat, dat + MX, -1);
// 	fill(pre, pre + MX, -1);
// 	fill(nxt, nxt + MX, -1);

// 	string str;
// 	cin >> str;
// 	for (int i = 0; i < str.size(); i++) {
// 		insert(i, str[i]);
// 	}

// 	int M;
// 	cin >> M;
// 	while (M--) {
// 		char cmd;
// 		cin >> cmd;
		
// 		if (cmd == 'L') {
// 			if (pre[curr] != -1)
// 				curr = pre[curr];
// 		} else if (cmd == 'D') {
// 			if (nxt[curr] != -1)
// 				curr = nxt[curr];
// 		} else if (cmd == 'B') {
// 			if (pre[curr] != -1)
// 				erase(curr);
// 		} else if (cmd == 'P') {
// 			char c;
// 			cin >> c;
// 			insert(curr, c);
// 		}
// 	}
// 	traverse();
// 	return (0);
// }

// const int MX = 1000005;
// char dat[MX];
// int pre[MX]; 
// int nxt[MX];
// int unused = 1;

// void insert(int addr, char num){
//   dat[unused] = num;
//   pre[unused] = addr;
//   nxt[unused] = nxt[addr];
//   if(nxt[addr] != -1) pre[nxt[addr]] = unused;
//   nxt[addr] = unused;
//   unused++;
// }

// void erase(int addr){
//   nxt[pre[addr]] = nxt[addr];
//   if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
// }

// void traversal(){
//   int cur = nxt[0];
//   while(cur != -1){
//     cout << dat[cur];
//     cur = nxt[cur];
//   }
// }

// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   fill(pre,pre+MX,-1);
//   fill(nxt,nxt+MX,-1);
//   string init;
//   cin >> init;
//   int cursor = 0;
//   for(auto c : init){
//     insert(cursor, c);
//     cursor++;
//   }  
//   int q;
//   cin >> q;
//   while (q--) {
//     char op;
//     cin >> op;
//     if (op == 'P') {
//       char add;
//       cin >> add;
//       insert(cursor, add);
//       cursor = nxt[cursor];
//     }
//     else if (op == 'L') {
//       if (pre[cursor] != -1) cursor = pre[cursor];
//     }
//     else if (op == 'D') {
//       if (nxt[cursor] != -1) cursor = nxt[cursor];
//     }
//     else { // 'B'
//       if (pre[cursor] != -1) {
//         erase(cursor);
//         cursor = pre[cursor];
//       }
//     }
//   }
//   traversal();
// }

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string init;
  cin >> init;
  list<char> L;
  for (auto c : init) L.push_back(c);
  auto cursor = L.end();
  int q;
  cin >> q;
  while (q--) {
    char op;
    cin >> op;
    if (op == 'P') {
      char add;
      cin >> add;
      L.insert(cursor, add);
    }
    else if (op == 'L') {
      if (cursor != L.begin()) cursor--;
    }
    else if (op == 'D') {
      if (cursor != L.end()) cursor++;
    }
    else { // 'B'
      if (cursor != L.begin()) {
        cursor--;
        cursor = L.erase(cursor);
      }
    }
  }
  for (auto c : L) cout << c;
}