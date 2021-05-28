#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mxx=0;
    cin>>n>>k;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            int result=(v[i]-v[i+1])-k;
            mxx=max(result,mxx);

        }
    }

    cout<<mxx<<endl;
    return 0;
}
