#include <iostream>
using namespace std;

int n;
int a[1000];

void in()
{
	for (int i = 1; i <= n; i++)
		if(a[i]) cout << i << " ";
		cout << endl;	
}

void tapCon(int x)
{
	if (x == n+1){
		in();
		return;
	}
	a[x] = 0;
	tapCon(x + 1);
	a[x] = 1;
	tapCon(x + 1);
}
int main()
{
	int n;
	tapCon(n);
	in();
}

