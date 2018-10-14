#include <iostream>
using namespace std;
int main()
{
	int h, a, b, n = 1;
	cin >> h >> a >> b;
	while (h > a) {
		h = h - (a-b);
		n++;

	}
	cout << n;
	system("pause");
}