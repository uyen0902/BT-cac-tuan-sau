#include<iostream>
using namespace std;

int length(const char* a)
{
    int stlen = 0;
    while(a[stlen] != '\0')
        stlen++;
    return stlen;
}

char* reverse(const char* a)
{
    char* s = new char[length(a)+1];
    for(int i = 0; i < length(a);i++){
        *(s+i) = *(a+length(a)-i-1);
    }
    s[length(a)] = '\0';
    return s;
}

char* delete_char(const char* a, char c)
{
    char* s = new char[length(a)+1];
    for(int i = 0;i < length(a);i++){
        if(*(a+i) == c) {
            for(int j = i;j < length(s); j++){
                *(s+j) = *(s+j+1);
            }
            i--;
        }
    } s[length(s)] = '\0';
    return s;
}

char* pad_right(const char* a, int n)
{
    char* s = new char[n+1];
    for(int i=0; i<n; i++){
        if(i >= length(a)){
            *(s+i) = ' ';
        }else {
            *(s+i) = *(a+i);
        }
    } s[n] = '\0';
    return s;
}

char* pad_left(const char* a, int n)
{
    char* s = new char[n+1];
	int k = 0;
	for(int i=0; i<n; i++){
        if(i >= n-length(a)){
            *(s+i) = *(a+k);
            k++;
        } else {
            *(s+i) = ' ';
        }
	}s[n] = '\0';
	return s;
}

char* truncate(const char* a, int n)
{
    char* s = new char[n+1];
    for(int i=0; i<n; i++)
        *(s+i) = *(a+i);
        s[n] = '\0';
    return s;
}

bool is_palindrome(char a[])
{
	for(int i=0; i < length(a); i++){
		if(*(a+i) != *(a+length(a)-i-1)) return false;
	} return true;
}

char* trim_left(const char* a)
{
    int c = 0;
	for(int i = 0; i < length(a); i++){
		if(*(a+i) != ' ' ) break;
		else {
			c++;
		}
	}
	char* s = new char[length(a)-c+1];
	for(int i=0; i<length(a)-c; i++){
        *(s+i) = *(a+c+i);
	}
	return s;
}

char* trim_right(const char* a)
{
    int c = 0;
	for(int i = length(a)-1; i >= 0; i--){
		if(*(a+i) != ' ' ) {
                break;
		}
		c++;
	}
	char* s = new char[length(a)-c+1];
	for(int i=0; i<length(a)-c; i++)
        *(s+i) = *(a+i);
        s[length(a)-c] = '\0';
        return s;
}


int main()
{
    char a[100] = "  aaabbbb cccccaaaaccmsur   ";
    cout << a << endl;

    char* s1 = reverse(a);
    cout << "a. Xau dao nguoc: " << s1 << endl;
    delete [] s1;

    char* s2 = delete_char(a, 'c');
    cout << "b. Xoa ki tu c trong xau a: " << s2 << endl;
    delete [] s2;

    char* s3 = pad_right(a, 5);
    cout << "c. Don phai: " << s3 << endl;
    delete [] s3;

    char* s4 = pad_left(a, 10);
	cout << "d. Don trai: " << s4 << endl;
	delete [] s4;

	char* s5 = truncate(a, 12);
    cout << "e. Cat xau: " << a << endl;
    delete [] s5;

    cout << "f. Doi guong: " << (is_palindrome(a) ? "True" : "False") << endl;

    char* s6 = trim_left(a);
    cout << "g. Loc trai: " << s6 << endl;
    delete [] s6;

    char* s7 = trim_right(a);
    cout << "h. Loc phai: " << s7 << endl;
    delete [] s7;

    return(0);
}

