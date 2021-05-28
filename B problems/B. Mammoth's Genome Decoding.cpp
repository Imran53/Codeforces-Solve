#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,A=0,G=0,T=0,C=0,element,ques=0,maxx;
    cin>>n;
    string s;
    cin>>s;

    if(n%4==0)
    {
         element=n/4;

        for(i=0;i<n;i++)
        {

            if(s[i]=='A')
                A++;
            else if(s[i]=='G')
                G++;
            else if(s[i]=='T')
                T++;
            else if(s[i]=='C')
                C++;
            else if(s[i]=='?')
                ques++;
        }
       // maxx=max(C,max(T,max(A,G)));
        if(A>element or G>element or T>element or C>element)
        {
            cout<<"===";
            return 0;
        }
        else{

            for(i=0;i<n;i++)
            {
                if(s[i]=='?')
                {
                    if(A<element)
                    {
                        s[i]='A';
                        A++;
                    }
                   else if(G<element)
                    {
                        s[i]='G';
                        G++;
                    }
                   else if(C<element)
                    {
                        s[i]='C';
                        C++;
                    }
                   else if(T<element)
                    {
                        s[i]='T';
                        T++;
                    }
                 }
        }
        cout<<s;
        }
    }

    else
    {
        cout<<"==="<<endl;
        //return 0;
    }
}
