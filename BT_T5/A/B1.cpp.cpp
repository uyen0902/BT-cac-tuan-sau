#include <iostream>
using namespace std;

int main()
{
	int a[100]; 
	char b[100];
	for (int i=0; i<3; i++)
		cout << "a" << " at " << &a[i] << endl;
		// Dia chi cac bien cach nhau 4 byte va bang kich thuoc cua int 
	for (int i=0; i<3; i++)
		cout << "b" << " at " << (void*)&b[i] << endl;
		// Dia chi cac bien cach nhau 1 byte va bang kich thuoc cuar char
		
	int a1=1, a2=3;
	cout << "a1 at " << &a1 << endl;
	cout << "a2 at " << &a2;
	return 0;
		
}
