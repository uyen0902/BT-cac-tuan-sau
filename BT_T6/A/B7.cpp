#include <iostream>
using namespace std;

void in_mang(int a[], int n)
{
	for (int i = 1; i <= n; i++ )
	cout << a[i] << " ";
	cout << endl;
}

void doi_VT(int a[], int s1, int s2)
{
	int temp = a[s1];
	a[s1] = a[s2];
	a[s2] = temp;
}

void hoan_vi(int a[], int first, int last, int n)
{
	if (first == last){
		in_mang(a, n);
		return;
	}
	
	for (int i = first; i <= last; i++){
		doi_VT(a, first, i);
		hoan_vi(a, first + 1, last, n);
		doi_VT(a, first, i);
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1; i <= n; i++){
		a[i] = i;
	}
	hoan_vi(a, 1, n, n);
	return 0;
}
 
