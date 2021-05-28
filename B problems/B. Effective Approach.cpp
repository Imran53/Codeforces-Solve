#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>pos(n+1);

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        pos[a]=i;

    }

    int m;
    cin>>m;
    long long first=0,second=0;

    for(int i=1;i<=m;i++)
    {
        int a;
        cin>>a;
        first+=pos[a];
        second+=n-pos[a]+1;
    }

    cout<<first<<" "<<second<<endl;
    return 0;
}
