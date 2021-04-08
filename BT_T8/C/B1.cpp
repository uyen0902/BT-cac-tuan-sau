#include<iostream>
using namespace std;

int length(char a[]){
    int stlen = 0;
    while(a[stlen] != '\0')
        stlen++;
    return stlen;
}

void reverse(char a[])
{
    for(int i = 0;i<length(a)/2;i++){
        char b = a[i];
        a[i] = a[length(a)-i-1];
        a[length(a)-i-1] = b;
    }
}

void delete_char(char a[], char c){
    for(int i = 0;i < length(a);i++){
        if(a[i] == c) {
            for(int j = i;j < length(a); j++){
                a[j] = a[j+1];
            }
            i--;
        }
    }
}

void pad_right(char a[], int n){
    if(length(a) == n) return;
    else{
        for(int i = length(a); i < n; i++)
		a[i]='_';
        a[n]='\0';

    }
}

void pad_left(char a[], int n)
{
	if(length(a) == n) return;
    else{
        int l = length(a);
        for(int i = 0; i<n; i++){
        	for(int j = i+1; j >= i; j--){
        		a[j] = a[j-1];
        	}
        	a[0] = '_';
		}

    }
}

void truncate(char a[], int n)
{
	if(length(a) <= n) return;
	else {
		a[n] = '\0';
	}
}

bool is_palindrome(char a[])
{
	for(int i=0; i < length(a); i++){
		if(a[i] != a[length(a)-i-1]) return false;
	} return true;
}

void trim_left(char a[])
{
	for(int i = 0; i < length(a); i++){
		if(a[i] != ' ' ) break;
		else {
			for(int j = i; j < length(a); j++){
				a[j] = a[j+1];
			}
			i--;
		}
	}
}

void trim_right(char a[])
{
	for(int i = length(a)-1; i >= 0; i--){
		if(a[i] != ' '){
			a[i+1] = '\0';
			break;
		}
	}
}
int main()
{
    char a[100] = "aaabbbbcccccaaaaccmsur";
    cout << a << endl;

    reverse(a);
    cout << "a. Xau dao nguoc: " << a << endl;

    delete_char(a, 'c');
    cout << "b. Xoa ki tu c trong xau a: " << a << endl;

    pad_right(a, 5);
    cout << "c. Don phai: " << a << endl;

    pad_left(a, 10);
	cout << "d. Don trai: " << a << endl;

	truncate(a, 12);
    cout << "e. Cat xau: " << a << endl;

    cout << "f. Doi guong: " << (is_palindrome(a) ? "True" : "False") << endl;

	char a1[100]= "   abcbv vjghg jfjf   " ;

    trim_left(a1);
    cout << "g. Loc trai: " << a1 << endl;

    trim_right(a1);
    cout << "h. Loc phai: " << a1 << endl;

    return(0);
}

