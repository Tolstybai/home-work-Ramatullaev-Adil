#include <iostream> 
using namespace std;
int main()
{
	int  k = 1;
	int mass[1000];
	for (int i = 0; i < 1000; i++)
	{
		cin >> mass[i];
		if (mass[i] == 0)
			break;
	}
	for (int i = 0; i < 1000; i++) {
		if (mass[i] == mass[i + 1])
			k++;
		if (mass[i] == 0)
			break;
	}

	cout << k << endl;


	system("pause");
	return 0;

}

