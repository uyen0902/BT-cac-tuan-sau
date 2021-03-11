#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n; 
	cin >> n;
	int a[n], b[n+1];
	for (int i=0; i<n; i++)
		cin >> a[i];
		
	for (int i=0; i<n+1; i++)
		cin >> b[i];
	
	int tmp;
	for(int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	
	int temp;
	for(int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			temp = b[i];
			b[i] = b[j];
			b[j] = temp;
		}
	}
	
	for (int i=0; i<=n; i++)	
	if(a[i] != b[i])
	{
		cout << b[i];
		break;
	}
	
	return 0;
}
