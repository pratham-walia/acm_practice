#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=2;i<n;i++)
    {
        int c=0;
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                c=c+1;
            }

        }
        if (c==0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}