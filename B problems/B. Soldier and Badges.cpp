#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    vector<int>v(100000);
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        while(v[a]>0)
        {
            a++;
            cnt++;
        }
        v[a]++;
    }

    cout<<cnt<<endl;
    return 0;

}
