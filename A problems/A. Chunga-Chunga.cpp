#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n;
    cin>>a>>b>>n;
    cout<<(a+b)/n<<" ";
    if(a%n+b%n<n)
        cout<<0;
    else if(a%n==0 or b%n==0)
        cout<<0;
    else
        cout<<min(n-(a%n),n-(b%n));
    return 0;
}
