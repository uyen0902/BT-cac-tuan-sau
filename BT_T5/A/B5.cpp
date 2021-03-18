#include <iostream>
using namespace std;

int x1=29;
int x2=92;
int x3(int&);

int main()
{
	cout << "x1 at " << &x1 << endl;
	cout << x3(x1) << endl;
	cout << "x2 at " << &x2 << endl;
	cout << x3(x2) << endl;
	return 0;
}

int x3(int &x4)
{
	cout << "x4 at " << &x4 << endl;
	return x4;
}

/* 
a. bien tham chieu va bien va no chieu toi la mot bien
b. co the khai bao mot tham chieu ma chua chieu ngay no toi mot bien thuong
c. co the chieu mot tham chieu toi mot bien khac voi dich ban dau.
*/
