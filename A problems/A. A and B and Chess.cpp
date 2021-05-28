#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c[8][8];
    int w=0,b=0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin>>c[i][j];
        }
    }

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(c[i][j]=='Q')
                w+=9;
            else if(c[i][j]=='R')
                w+=5;
            else if(c[i][j]=='B')
                w+=3;
            else if(c[i][j]=='N')
                w+=3;
            else if(c[i][j]=='P')
                w+=1;

            else if(c[i][j]=='q')
                b+=9;
            else if(c[i][j]=='r')
                b+=5;
            else if(c[i][j]=='b')
                b+=3;
            else if(c[i][j]=='n')
                b+=3;
            else if(c[i][j]=='p')
                b+=1;

        }
    }

    if(w>b)
        cout<<"White\n";
    else if(w<b)
        cout<<"Black\n";
    else
        cout<<"Draw\n";

    return 0;


}
