#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,ss;
    cin>>s>>ss;
    int result,sum=0;

    for(int i=0;i<n;i++)
    {
        result=abs(s[i]-ss[i]);

        if(result<=5)
           sum+=result;

        else
            sum+=10-result;


    }

   cout<<sum<<endl;

    return 0;
}
