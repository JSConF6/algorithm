#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	A, B, C, D;
	int arr[3][4];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 1)
				num++;
		}
		if (num == 3)
			cout << "A" << "\n";
		else if (num == 2)
			cout << "B" << "\n";
		else if (num == 1)
			cout << "C" << "\n";
		else if (num == 0)
			cout << "D" << "\n";
		else
			cout << "E" << "\n";
	}

	return (0);
}