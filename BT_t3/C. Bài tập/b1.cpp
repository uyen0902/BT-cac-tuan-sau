#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double a[1000], S=0;
	for (int i=0; i<n; i++)
	{	cin >> a[i];
		S += a[i];
	}
		
	double TB = S/n;
	cout << "Gia tri trung binh la: " << TB << endl;
	
	double sum=0;
	for (int i=0; i<n; i++)
	{
		double tong = (a[i]-TB)*(a[i]-TB);
		sum += tong;
	}
	cout << "Phuong sai la: " << sum/(n-1) << endl;
	return 0;
}
