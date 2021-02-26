#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	if (x+y>z && y+z>x && x+z>y)
	{
		cout << "Chu vi la: " << x+y+z << endl;
		if (x==y && y==z && x==z) cout << "Tam giac deu";
		else if (x==y || y==z || x==z ) cout << "Tam giac can";
		else if ( x*x+y*y==z*z || z*z+y*y==x*x || x*x+z*z==y*y)
		cout << "Tam giac vuong";
		else cout << "Tam giac thuong";
	}
	else cout << "Khong phai tam giac";
	return 0;
}
