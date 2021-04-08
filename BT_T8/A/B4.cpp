#include<iostream>
using namespace std;

int main()
{
    char *p;
    char **s = &p;
    char foo[] = "Hello World";
    p = foo;
    printf("s is %s\n",*s);
    s[0] = foo;
    printf("s[0] is %s\n",s[0]);
    return(0);
}
