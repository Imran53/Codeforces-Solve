#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    unordered_map<string, int> m;
    while(t--)
    {
        string  s;
        cin>>s;
        if(m[s]==0)
            cout<<"OK\n";
        else
            cout<<s<<m[s]<<endl;
        m[s]++;
    }
}
