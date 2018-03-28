#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello!\n" << 6.6*5.9 << std::endl;

	cout << endl << endl;

	int i;
	//Fractional part will be lost
	i = 4.9;
	cout << i << endl;

	auto j = 5;
	cout << j << endl;

	auto f = 4.9;
	j = f;
	//cout << f << endl;
	//f = 9.0 / 5;
	cout << f << endl;

	//i = "hello";
	//f = 1.0 / "hello";
	return(0);
}