#include<iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    if (n == 0)
        return ;
    int digit = n % 10;
    n = n/10;
    sayDigit(n , arr);
    cout<<arr[digit]<<endl;
}

int main()
{
    string arr[10] = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
    };
    sayDigit(412, arr);
}