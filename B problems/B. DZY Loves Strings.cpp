#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int a[26];
    int sum=0;
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s.size();i++)
    {
        sum+=(i+1)*a[int(s[i])-97];
    }
    sort(a,a+26);
    int kk=s.size()+1;

    for(int i=0;i<k;i++)
    {
        sum+=a[25]*kk;
        kk++;
    }
    cout<<sum;
    return 0;
}
