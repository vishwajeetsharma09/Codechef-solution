#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str, str1;
        cin>>str>>str1;
        int n=str1.length();
        int m=str.length();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int a=0;
            for(int j=0; j<m; j++)
            {
                if(str[j]==str1[i])
                {
                    a++;
                    break;
                }
            }
            if(a>0)
                sum++;
        }
        cout<<sum<<endl;
    }
}