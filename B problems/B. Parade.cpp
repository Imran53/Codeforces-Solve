#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int L[n],R[n],sl=0,sr=0,rslt=0,r=0;

    for(int i=0;i<n;i++)
    {
        cin>>L[i]>>R[i];
        sl+=L[i];
        sr+=R[i];

    }

    int t=abs(sl-sr);

    for(int i=0;i<n;i++)
    {
        int tempL=(sl-L[i]+R[i]);
        int tempR=(sr-R[i]+L[i]);
        r=abs(tempL-tempR);
        if(r>t)
        {
            rslt=i+1;
            t=r;
        }
    }

    cout<<rslt<<endl;
    return 0;
}
