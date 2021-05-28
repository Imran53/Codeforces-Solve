#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s>>ss;
    int c=0;

    for(int i=0;i<min(s.size(),ss.size());i++)
    {
        if(s[s.size()-i-1]==ss[ss.size()-i-1])
            c++;
        else
            break;
    }

    cout<<(s.size()-c)+(ss.size()-c)<<endl;
    return 0;
}
