#include <iostream>
using namespace std;

int th1(int n)
{
	cout << "n1 at " << &n << endl;
	return n;
}

int th2( int &n)
{
	cout << "n2 at " << &n << endl;
	return n;
} 

int main()
{
	int a;
	cin >> a;
	cout << " a at " << &a << endl;
	cout << th1(a) << endl;
	cout << th2(a);
	return 0;
}

// dia chi cua tham so truyen theo kieu tham tri khac dia chi doi so
// dia chi cua tham so truyen theo kieu tham bien giong dia chi doi so
