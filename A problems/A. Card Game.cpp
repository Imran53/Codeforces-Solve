#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<int>aa(a),bb(b);

        for(int i=0; i<a; i++)
            cin>>aa[i];

        sort(aa.begin(),aa.end());

        for(int i=0; i<b; i++)
            cin>>bb[i];

        sort(bb.begin(),bb.end());

        if(aa[aa.size()-1]>bb[bb.size()-1])
            cout<<"YES\n";

        else
            cout<<"NO\n";

    }
    return 0;
}
