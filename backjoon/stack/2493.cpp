// #include <iostream>
// #include <stack>

// using namespace std;

// const int MX = 500005;
// int idx[MX];

// int main(void) {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N;
// 	cin >> N;
// 	stack<pair<int ,int>> S;
// 	for (int i = 0; i < N; i++) {
// 		int x;
// 		cin >> x;
// 		pair<int, int> pair = { x, i };
// 		if (i == 0) {
// 			idx[i] = 0;
// 			S.push(pair);
// 		} else if (i == 1) {
// 			if (S.top().first < pair.first) {
// 				idx[i] = 0;
// 				S.pop();
// 			} else
// 				idx[i] = S.top().second + 1;
// 			S.push(pair);
// 		}
// 		else {
// 			while (S.size() != 1 && S.top().first < pair.first)
// 				S.pop();
// 			if (S.top().first > pair.first)
// 				idx[i] = S.top().second + 1;
// 			S.push(pair);
// 		}
// 	}
	
// 	for (int i = 0; i < N; i++)
// 		cout << idx[i] << " ";

// 	return (0);
// }

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N;
stack<pair<int,int>> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;  
  tower.push({100000001, 0});
  for (int i = 1; i <= N; i++) {
    int height;
    cin >> height;
    while (tower.top().X < height)
      tower.pop();    
    cout << tower.top().Y << " ";
    tower.push({height, i});      
  }
}