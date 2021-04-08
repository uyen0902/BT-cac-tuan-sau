#include <iostream>
using namespace std;

//a
/*
int main( )
{
    char a[4] = "abc";
    for (char *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
*/

//b
/*
int main( )
{
    int a[4] = {1,2,3,4};
    for (int *cp = a; cp < a+4; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
*/

//c
/*
int main( )
{
    double a[4] = {1.4, 2.6, 3.8, 4.4};
    for (double *cp = a; cp < a+4; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
*/

//d
int main( )
{
    double a[4] = {1.4, 2.6, 3.8, 4.4};
    for (double *cp = a; cp < a+4; cp+=2) {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}


