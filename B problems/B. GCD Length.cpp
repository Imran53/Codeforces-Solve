#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a=pow(10,a-1);
        b=pow(10,b-1);
        c=pow(10,c-1);
        if(a<b)
            a+=c;
        else
            b+=c;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
