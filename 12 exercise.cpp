#include <iostream>
using namespace std;
int main() {
	int n,k=1;
	cin >> n;
	int *mass = new int[n];
	int max = mass[0];
	for (int i = 0; i < n; i++)
		cin >> mass[i];
	for (int i = 0; i < n; i++)
	{
		if (mass[i] ==mass[i+1])
			k++;
	}
	if (k == 1)
		cout << "0";
	else
		cout << k;

	system("pause");
	return 0;
}