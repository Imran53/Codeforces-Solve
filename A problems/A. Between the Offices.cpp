#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,S=0,f=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='S' and s[i+1]=='F')
            S++;
        else if(s[i]=='F' and s[i+1]=='S')
            f++;
    }

    if(S<=f)
        cout<<"NO\n";
    else
        cout<<"YES\n";


    return 0;


}
