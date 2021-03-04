#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool check[10000];
		for (int i=0; i<10000; i++){
			check[i]= false;
		}
		
		for (int i=0; i<n; i++){
			int n1;
			cin >> n1;
			if(check[n1] == true){
				cout << "Yes" << endl;
				return 0;
			}
			check[n1]=true;
		}
		cout << "No";
	return 0;
	
	
	
}
