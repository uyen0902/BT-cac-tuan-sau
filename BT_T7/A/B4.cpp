#include<iostream>
using namespace std;

int timNhiPhan(int a[], int f, int l, int key)
{
    if(f>l) return -1;
    int mid = (f+l)/2;
    if(*(a+mid) == key) return mid;
    if(*(a+mid) > key) return timNhiPhan(a, f, mid - 1, key);
    if(*(a+mid) < key) return timNhiPhan(a, mid + 1, l, key);
}

int main()
{
    int n = 9;
    int a[] = {1,2,9,29,92,1000,34,48,55};
    int size = sizeof(a)/sizeof(int);
    cout << timNhiPhan(a, 0, size - 1, n);
    return 0;
}
