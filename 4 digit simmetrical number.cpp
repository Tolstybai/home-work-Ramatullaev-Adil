#include <iostream> 
using namespace std;

int main()
{
	int n;
	cout << "Enter number: " <<endl;
	cin >>n;
	if ((n / 1000 == n % 10) && ((n / 100) % 10 == (n % 100) / 10)) {
		cout << "1" << endl;
	}
	else {
		cout << "37" <<endl;
	}
	system("pause");
	return 0;
}