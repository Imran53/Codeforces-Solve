#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxx=0;
    cin>>n;
    string s;
    cin>>s;
    set<char>ss;

    for(int i=0; i<s.size();i++)
    {

        if(islower(s[i]))
        {
            ss.insert(s[i]);
            if((int)ss.size()>maxx)
                maxx=ss.size();

        }
        else
            ss.clear();

    }

    cout<<maxx;
    return 0;
}
