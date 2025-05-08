#include <iostream>

using namespace std;

int	func1(int n)
{
	int		sum = 0;

	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return (sum);
}

int	func2(int *arr, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == 100)
				return (1);
		}
	}
	return (0);
}

int	func3(int n)
{
	for (int i = 1; i <= n; i++) {
		if (i * i == n)
			return (1);
	}
	return (0);
}

int	func4(int n)
{
	int		val = 1;
	while (2 * val <= n)
		val *= 2;
	return val;
}

int	main()
{
	int		sum = func1(27639);
	cout << "Sum : " << sum << endl;

	int		arr[] = { 4, 13, 63, 87 };
	cout << "func2 : " << func2(arr, 4) << endl;

	cout << "func3 : " << func3(756580036) << endl;

	cout << "func4 : " << func4(5) << endl;
	return (0);
}