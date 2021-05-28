#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long sum=0;
        vector<long long>v(n*k);

        for(int i=0; i<n*k; i++)
            cin>>v[i];
        int div=(n+1)/2-1;
        int start=k*div;
        int incrmnt=n-div;

        for(int i=start; i<n*k; i+=incrmnt)
        {
            sum+=v[i];
        }

        cout<<sum<<endl;


    }

    return 0;
}
