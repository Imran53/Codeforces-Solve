#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,leftzero=0,leftone=0,rightzero=0,rightone=0 ;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        if(a==0)
            leftzero++;

        else
            leftone++;

        if(b==0)
            rightzero++;

        else
            rightone++;

    }

    int l=min(leftzero,leftone);
    int r=min(rightzero,rightone);
    cout<<l+r<<endl;

    return 0;
}
