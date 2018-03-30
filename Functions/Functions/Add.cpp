#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = add(3, 4);
	cout << "3 plus 4 is " << a << endl << endl;

	cout << "Press any key to continue.";
	cin >> a;
	return(0);
}