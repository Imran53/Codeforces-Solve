#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum=0;
    cin>>n;

    int a[101];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        sum+=a[i];
    }

    cout<<sum/n<<endl;
    return 0;
}
