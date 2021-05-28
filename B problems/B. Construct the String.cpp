#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1335B
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        string s;
        cin>>n>>a>>b;

        for(int i=0;i<n;i++)
        {
            s+=(i%b)+'a';
        }

        cout<<s<<endl;
    }
    return 0;
}
