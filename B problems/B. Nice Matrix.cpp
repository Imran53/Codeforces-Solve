#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        long long c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int b[3]={a[i][j],a[i][m-j-1],a[n-i-1][j]};
                sort(b,b+3);
                c+=b[1]-b[0]+b[2]-b[1];
                a[i][j]=a[i][m-j-1]=a[n-i-1][j]=b[1];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
