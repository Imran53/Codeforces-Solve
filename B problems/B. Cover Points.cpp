#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long maxx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        maxx=max(maxx,(a+b));
    }

    cout<<maxx<<endl;
    return 0;
}
