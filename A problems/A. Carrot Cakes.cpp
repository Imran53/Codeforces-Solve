//ALHAMDULILLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t,k,d;
    cin>>n>>t>>k>>d;

    double r=(ceil(n/k)*t)-t;

    if(r>d)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
