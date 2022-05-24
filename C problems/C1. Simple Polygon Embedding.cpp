#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double nn=1/(tan(PI/(2*n)));
        cout<<fixed<<setprecision(9)<<nn<<endl;
    }
    return 0;
}
