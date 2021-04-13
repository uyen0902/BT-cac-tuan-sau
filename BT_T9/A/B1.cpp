#include<iostream>
using namespace std;

int l(const char* s)
{
    int length = 0;
    while (s[length] != '\0')
        length ++;
    return length;
}

char* concat(const char* s1, const char* s2)
{
    char *s = new char[l(s1) + l(s2)];
    for(int i=0; i < l(s1); i++)
        *(s+i) = *(s1+i);

    for(int i=l(s1); i < l(s1)+l(s2); i++)
        *(s+i) = *(s2+i-l(s1));
    return s;

}

int main()
{
    char s1[] = "Hello";
    char s2[] = "World";
    char *s = concat(s1, s2);
    cout << s;
    delete [] s;
    return 0;
}
