#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[25];
	cin >> s;
	for (int i=0; i<strlen(s); i++){
		for (int j=0; j < strlen(s); j++){
			cout << s[i] << s[j] << " ";
			for (int k=0; k< strlen(s); k++){
				cout << s[i] << s[j] << s[k] << " ";
			}
		}
	}
	return 0;	
}
