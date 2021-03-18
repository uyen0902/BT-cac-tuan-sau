#include <iostream>
using namespace std;

long F(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return F(n-1) + F(n-2);
}
int main()
{
	int n;
	cin >> n;
	cout << F(n) << endl;
	
	long fm = 0;
	long f0 = 0, f1 = 1;
	if(n == 0 || n == 1) {
		fm = n;
		cout << fm;
		return 0;
	}
	
	for (int i = 2; i <= n; i++)
	{
		fm = f0 + f1;
		f0 = f1;
		f1 = fm;
	}
	cout << fm << endl;
	return 0;
}

