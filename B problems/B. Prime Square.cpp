#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //Boycott France
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i%n==j or (i+1)%n==j)
                {
                    cout<<1<<" ";
                }
                else
                    cout<<0<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

