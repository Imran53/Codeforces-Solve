#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>a(1000000);

    for(int i=0;i<n;i++)
    {
        a[s[i]]++;
    }

    for(char c='a';c<='z';c++)
    {
        a[c]=min(k,a[c]);
        k-=a[c];
    }

    for(int i=0;i<n;i++)
    {
        if(a[s[i]]>0)
            a[s[i]]--;
        else
            cout<<s[i];
    }

    return 0;
}
