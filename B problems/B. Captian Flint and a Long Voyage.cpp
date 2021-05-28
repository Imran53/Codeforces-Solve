#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int nn=ceil((n+4-1)/4);
        cout<<string(n-nn,'9')<<string(nn,'8');
        cout<<endl;


    }
    return 0;

}

