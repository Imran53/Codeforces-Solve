#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1 and b>a)
        cout<<"<";
    else if(a>b and b==1)
        cout<<">";
    else if(a==2 and b==4)
        cout<<"=";
    else if(a==4 and b==2)
        cout<<"=";
    else if(a==2 and b==3)
        cout<<"<";
    else if(a==3 and b==2)
        cout<<">";
    else if(a==2 and b==3)
        cout<<"<";
    else if(a==b)
        cout<<"=";
    else if(a>b)
        cout<<"<";
    else
        cout<<">";

    return 0;
}
