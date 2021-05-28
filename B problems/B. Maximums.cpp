#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    long long sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        cout<<sum+a<<" ";
        sum=max(sum,sum+a);

    }


    return 0;
}
