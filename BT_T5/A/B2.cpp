#include <iostream>
using namespace std;

int factorial (int x)
{
	cout << "x = " << x << " at " << &x << endl;
	if (x == 1) return 1;
	return x*factorial(x-1);
}
int main()
{
	int x; 
	cin >> x;
	cout << "Giai thua cua " << x << " la " << factorial(x);
	return 0;		
}
