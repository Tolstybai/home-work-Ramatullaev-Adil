#include <iostream> 
using namespace std;
int main()
{
	int n = 0;
	int mass[100];
	for (int i = 0; i < 100; i++)
	{
		cin >> mass[i];
		if (mass[i] == 0)
			break;
	}
	for (int i = 1; i < 100; i++) {

		if (mass[i] > mass[i + 1] && mass[i + 1] != 0 && mass[i] > mass[i - 1]) 

			n++;
		
		if (mass[i] == 0) 
			break;
		
	}

	cout << n;

	cin.get();
	cin.get();
	return 0;

}