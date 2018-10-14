#include <iostream>
using namespace std;
int main()
{
	int k, n, a;
	cin >> n;
	k = 0;
	a = n;
	while (n > 0)
	{
		k = k * 10 + (n % 10);
		n = n / 10;
	}
	if (a == k) {
		cout << "1" << endl;
	}
	else {
		cout << "37" << endl;
	}
	
	system("pause");
	return 0;

}