#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = n-1;
	while (n>=0)
	{
		if (a != n) cout << n << " ";
		a = n; 
		cin >> n;
		
	}
	cout << n;
	return 0;
}
