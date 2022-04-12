#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        long long x,k;
        cin>>x>>k;
        long long c=0;
        for(int i=2;i*i<=x;i++)
        {
            while(x%i==0)
            {
                c++;
                x=x/i;
            }
        }
        if(x>1)
        {
            c++;
        }
        if(c>=k)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}

