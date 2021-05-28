#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);

        for(int i=0;;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    c++;
                }
            }

            break;
        }

        cout<<c<<endl;
    }

    return 0;
}
