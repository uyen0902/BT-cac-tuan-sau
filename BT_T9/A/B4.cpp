#include<iostream>
using namespace std;
int main()
{
    int *a;
    {
        int b = 9;
        a = &b;
        delete a; // loi: khong duoc thu hoi vung nho khong duoc cap phat dong.
    }
    return 0;
}

