#include <iostream>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	int a[n];
	int tongChan=0, soPhanTuLe=0;
	for (int i=0; i<n; i++){
		cin >> a[i];
		if(a[i]%2==0) tongChan += a[i];
		else soPhanTuLe++;
	}
	
	
	int max = a[0], min = a[0];
	
	for (int i=0; i<n; i++)
	if(max < a[i]) max = a[i];
	
	for (int i=0; i<n; i++)
	if(min > a[i]) min = a[i];
	
	cout << "Phan tu nho nhat: " << min << endl
		 << "Phan tu lon nhat: " << max << endl
		 << "Tong cac phan tu chan: " << tongChan << endl
		 << "So cac phan tu le: " << soPhanTuLe << endl;
	return 0;	
}
