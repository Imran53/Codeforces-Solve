#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string s,ss;
    cin>>s>>ss;
    vector<int>v,a(26),b(26);

    for(int i=0;i<n;i++)
    {
        a[s[i]-'a']++;
        b[ss[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<-1;
            return 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]!=ss[i])
        {
            for(int j=i+1;j<n;j++)
            {
                cnt++;

                if(s[j]==ss[i])
                {
                    for(int k=j;k>i;k--)
                    {
                        swap(s[k-1],s[k]);
                        v.push_back(k);
                    }
                    break;
                }
            }
        }
    }

    cout<<cnt<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


}
