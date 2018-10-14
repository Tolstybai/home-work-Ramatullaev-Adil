#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int k, n;
	double a, b;
	cin >> n;
	k = 0;
	a = pow(2, 31);
	b = pow(-2, 31);
	while (n > 0)
	{
		k = k * 10 + (n % 10);
		n = n / 10;
	}
	if (k >a && k<b) {
		cout << "ERROR" << endl;
	}
	else {
		cout << k << endl;
	}

	system("pause");
	return 0;
}