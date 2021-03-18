#include <iostream>
using namespace std;

void deQuy(int n)
{
	int a[1000];
	if(n == 0) return;
	deQuy(n-1);
}

int main()
{
	int n;
	cin >> n;
	deQuy(n);
	return 0;
}

