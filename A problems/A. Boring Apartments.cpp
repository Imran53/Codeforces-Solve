#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s[0]-'0';
        int m=s.size();
        cout<<(m*(m+1))/2+(n-1)*10<<endl;
    }

    return 0;
}
