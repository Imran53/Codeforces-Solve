#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n*n;
    int a=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            cout<<a<<" "<<m<<" ";
            a++;
            m--;
        }
        cout<<endl;
    }
    return 0;
}
