#include <iostream>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	cout << "first position ";
	cin >> x1 >> y1;
	cout << "second position ";
	cin >> x2 >> y2;
	if (x1 - x2 == 0 || y1 - y2 == 0)
		cout << "yes";
	else
		cout << "no";
	system("pause");
	return 0;
}