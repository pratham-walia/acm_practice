#include<iostream>
using namespace std;

int main()
{
    int a,b,gcd=1;
    cin>>a>>b;
    for (int i=2;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}