#include <iostream>
using namespace std;

bool doi_xung(char *s)
{
	int length=0;
	while (s[length] != '\0'){
		length++;
	}
	for (int i=0; i <= length/2; i++)
		if (s[i] != s[length-i-1])
			return false ;
	return true;
		
}

int main()
{
	char s[100];
	cin >> s;
	if(doi_xung(s))
		cout << "Yes";
	else cout << "No";
	return 0;
}
