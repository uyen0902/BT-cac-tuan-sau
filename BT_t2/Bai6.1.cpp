#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x,y,UCLN;
	cin >> x >> y;
	for (int i=min(x,y); i>=1; i--)
	{
		if(x%i==0 && y%i==0){
			UCLN = i;
	 		break;
		}
	}
	cout << "Phan so toi gian: " << x/UCLN << "/" << y/UCLN;
	return 0;
	
}
