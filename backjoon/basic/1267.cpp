#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	N;
	int	YSum = 0, MSum = 0;

	cin >> N;
	int	*T = new int[N];
	for (int i = 0; i < N; i++)
		cin >> T[i];
	
	for (int i = 0; i < N; i++) {
		YSum += 10 * ((T[i] / 30) + 1);
		MSum += 15 * ((T[i] / 60) + 1);
	}

	if (YSum < MSum)
		cout << "Y " << YSum << "\n";
	else if (YSum == MSum)
		cout << "Y M " << YSum << "\n";
	else
		cout << "M " << MSum << "\n";

	delete[] T;
	return (0);
}