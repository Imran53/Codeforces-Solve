#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,one=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            zero++;
        else
            one++;
    }

    cout<<abs(zero-one)<<endl;
    return 0;

}
