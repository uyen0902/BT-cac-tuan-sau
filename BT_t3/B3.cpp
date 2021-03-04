#include <iostream>
using namespace std;

bool kt_doi_guong(int n)
{
	int num=n;
	int r, sum=0, temp;
	for (temp=num; num != 0; num=num/10){
		r= num%10;
		sum = sum*10 + r;
	}
	if (temp == sum) 
	return true;
	return false;
}
int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		int a,b;
		cin >> a >> b;
		int count=0;
		for (int j=a; j<=b; j++){
			if(kt_doi_guong(j)) count++;
		}
		cout << count << endl;
	}	
	return 0;
}
