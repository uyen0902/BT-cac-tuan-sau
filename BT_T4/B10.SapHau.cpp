#include <iostream>
#include <cmath>
using namespace std;

int a[5];

bool OK(int x, int y)
{
	for (int i=1; i<=x; i++)
		if(a[i] == y || abs(i-x) == abs(a[i]-y)) return false;
		return true;
}

void in(int n)
{
	for (int i=1; i<=n; i++)
	cout << a[i] << " ";
	cout << endl;
}

void KT(int i, int n)
{
	for (int j=1; j<=n; j++)
	if(OK(i,j))
	{
		a[i] = j;
		if(i==n) in(n);
		KT(i+1,n);
	}
}
int main()
{
	int n=5;
	KT(1,n);
	return 0;
}
