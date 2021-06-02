#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int one,two,cnt=0;

    if(a.size()!=b.size())
        cout<<"NO\n";

    else
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                cnt++;
                two=one;
                one=i;
            }
        }

        if(cnt==2 and (a[one]==b[two] and a[two]==b[one]))
            cout<<"YES";
        else
            cout<<"NO";
    }

    return 0;

}
