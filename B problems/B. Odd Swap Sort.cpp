#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int m_e=0,m_o=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                if(a[i]<m_e)
                {
                    cout<<"NO\n";
                    goto read;
                }
                m_e=a[i];
            }
            else
            {
                if(a[i]<m_o)
                {
                    cout<<"NO\n";
                    goto read;
                }
                m_o=a[i];
            }
        }
        cout<<"YES\n";
    }

    return 0;
}
