#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	A, B, C;

	cin >> A >> B >> C;

	if (A > B && A > C && B < C)
		cout << B << " " << C << " " << A;
	else if (A > B && A < C && B < C)
		cout << B << " " << A << " " << C;
	else if (A > B && A > C && B > C)
		cout << C << " " << B << " " << A;
	else if (A < B && A > C && B > C)
		cout << C << " " << A << " " << B;
	else if (A < B && A < C && B > C)
		cout << A << " " << C << " " << B;
	else
		cout << A << " " << B << " " << C;
	
	return (0);
}