#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        if(s=="X++" or s=="++X")
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
