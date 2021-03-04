#include <iostream>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	int a[n];
	for ( int i=0; i<n; i++)
	cin >> a[i];
	
	int count[10];
	for (int i=0; i<10; i++)
	{
		count[i]=0;
	}
	
	for (int i=0; i<n; i++)
	{
		count[a[i]]++;
	}
	
	for (int i=0; i<n; i++)
	{
		if(count[i] != 0){
			cout << "So luong phan tu " << i << " trong mang la: " << count[i] << endl;
		}
		
	}
	return 0;
}
