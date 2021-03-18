#include <iostream>
using namespace std;

void f(int mang)
{
	cout << mang << endl;
}

int main()
{
	int A[100];
	cout << A << endl;
	cout << &A[0] << endl;
	return 0;
}
// ket qua in ra tu main va f giong nhau
// mang duoc truyen vao ham theo co che pass-by-reference
