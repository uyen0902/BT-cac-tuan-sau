#include<iostream>
using namespace std;

void count_even(int* a, int n)
{
    cout << "so cac so chan trong 5 phan tu dau la: " ;
    int dem = 0;
    for(int i = 0; i < 5; i++){
        if(a[i]%2 == 0)
        dem++;
    }
    cout << dem;
    cout << endl;
    dem = 0;
    cout << "so cac so chan trong 5 phan tu cuoi la: ";
    for(int i = n-1; i > n-1-5; i--){
        if(a[i]%2 == 0)
        dem++;
    }
    cout << dem;
}

int main()
{
    int a[]={1,2,2,4,6,6,7,8,9,10,10,9,92,29,999,100,46};
    count_even(a, sizeof(a)/sizeof(int));
    return 0;
}
