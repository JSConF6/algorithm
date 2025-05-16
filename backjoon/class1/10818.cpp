#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	int min = 9999999;
	int max = -1000005;
	while (N--) {
		int x;
		cin >> x;
		if (max < x)
			max = x;
		if (min > x)
			min = x;
	}
	cout << min << " " << max;

	return (0);
}