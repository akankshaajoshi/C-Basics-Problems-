#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for (int x = 1; x <=12 ; x++)
    {
        for (int y = 1; y<=10; y++)
        {
            cout<<setw(4)<<x*y;
            cout<<endl;
        }
    }
    return 0;
}