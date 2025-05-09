#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	A, B, C;

	cin >> A >> B >> C;

	if (A == B && B == C && A == C)
		cout << 10000 + A * 1000;
	else if (A != B && B != C && A != C)
		cout << max(max(A, B), C) * 100;
	else
	{
		if (A == B || A == C)
			cout << 1000 + A * 100;
		else if (B == A || B == C)
			cout << 1000 + B * 100;
		else if (C == A || C == B)
			cout << 1000 + C * 100;
	}

	return (0);
}