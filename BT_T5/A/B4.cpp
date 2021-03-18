#include <iostream>
using namespace std;

string s(string x)
{
	cout << &x << endl;
	return x;
}
int main()
{
	string a="LePhuongUyen";
	cout << &a << endl;
	cout << s(a);
	return 0;
}
 /* 
 a.
 mang duoc truyen theo kieu tham bien pass-by-reference
 
 b.
 string duoc truyen theo kieu tham tri pass-by-value
 */
