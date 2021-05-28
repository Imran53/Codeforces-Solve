#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int m;
    cin>>m;
    int b[m];
    for(int j=0;j<m;j++)
        cin>>b[j];

    int cnt=0,max=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int r=b[j]/a[i];

            if(b[j]%a[i]==0)
            {
                if(r>max)
                {
                    max=r;
                    cnt=1;
                }

                else if(r==max)
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
