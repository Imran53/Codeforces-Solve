#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        while(n>=10)
        {
            sum+=n-(n%10);
            n=(n%10)+(n/10);
        }

        cout<<sum+n<<endl;
    }
    return 0;
}
