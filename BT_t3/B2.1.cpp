#include <iostream>
#include <string>
using namespace std;

bool doi_xung(string s)
{
	for (int i=0; i <= s.length()/2; i++)
		if (s[i] != s[s.length()-i-1])
			return 0;
		return 1;
}


int main()
{
	string s;
	cin >> s;
	if(doi_xung(s))
		cout << "Yes";
	else cout << "No";
	return 0;
}
