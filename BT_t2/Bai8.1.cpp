#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c;
	cin >> a >> b >>c;
	double D= b*b-4*a*c;
	if ( a==0)
	{
		if (b==0){
			if (c==0){
				cout << "phuong trinh co vo so nghiem"<< endl;
			} else cout << "phuong trinh vo nghiem" << endl;
		} else cout << "phuong trinh co nghiem duy nhat: " << -c/b;
	} 
	else if (D>0)
	{
	 double	x1= (-b+sqrt(D))/(2*a);
	 double x2= (-b-sqrt(D))/(2*a);
	 cout << "phuong trinh co 2 nghiem phan biet: " << x1 << "; "<< x2;
	} else if (D==0)
	{
	 cout << "phuong trinh co nghiem kep x1 = x2 = "<< -b/2*a;	
	} else cout << "phuong trinh vo nghiem";
	return 0;	
}
	

