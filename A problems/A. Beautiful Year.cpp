
//Eid - Ul - Adha Mubarak :)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(1)
    {
        n++;
        int m=n;
        set<char>c;

        while(m!=0)
        {
            int remainder=m%10;
            c.insert(remainder);
            m/=10;
        }

        if(c.size()==4)
        {
            cout<<n<<endl;
            return 0;
        }
    }

    return 0;
}
