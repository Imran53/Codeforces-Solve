#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,cnt=0,height=0;
    cin>>k;
    vector<int>v;

    for(int i=0;i<=11;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(int i=11;i>=0;i--)
    {
        if(height<k)
        {
            height+=v[i];
            cnt++;

        }

        else
            break;
    }

    if(height<k)
        cout<<-1<<endl;
    else
        cout<<cnt<<endl;
    return 0;
}
