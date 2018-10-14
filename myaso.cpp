#include <iostream> 
using namespace std;

int main()
{
	int v, t;
	cout << "Enter speed and time: "<<endl;
	cin >> v >> t;
	if (v > 0) {
		cout << "Mark: " << v * t % 109 << endl;
	}
	else {
		cout << "Mark: " << 109 + v * t % 109<<endl;
	}

	system("pause");
	return 0;
}