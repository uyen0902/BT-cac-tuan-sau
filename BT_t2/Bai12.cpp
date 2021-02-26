#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cin >> x ;
	int n = sqrt(x);
	if (n*n==x) return true;
	return false ;
}
