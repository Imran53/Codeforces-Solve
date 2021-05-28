#include<bits/stdc++.h>
#define WELCOME_TO_MY_CODE        using namespace std;
#define nl                        "\n"
#define ff                        first
#define ss                        second
#define ll                        long long
#define ld                        long double
#define pb                        push_back
#define pf                        push_front
#define np                        next_permutation
#define pp                        prev_permutation
#define sqr(x)                    (x*x)
#define pi                        acos(-1)
#define gcd(x,y)                  __gcd(x,y)
#define lcm(x,y)                  (x*y)/gcd(x,y)
#define mod                       1000000007
#define cceil(x,y)                (x+y-1)/y
#define ffloor(x,y)               (x-y+1)/y
#define max3(a,b,c)               max(max(a,b),c)
#define max4(a,b,c,d)             max(max3(a,b,c),d)
#define min3(a,b,c)               min(min(a,b),c)
#define min4(a,b,c,d)             min(min3(a,b,c),d)
#define setprecision(x)           fixed<<setprecision((int)(x))
#define mem1(x)                   memset((x),0,sizeof(x))
#define mem2(x)                   memset((x),-1,sizeof(x))
#define all(x)                    (x).begin(),(x).end()
#define rev(x)                    reverse(all(x))
#define sorta(x)                  sort(all(x))
#define sortd(x)                  sort(all(x),greater<int>())
#define csort(x,c)                sort(all(x),c)
#define rsort(x)                  sort((x).rbegin(),(x).rend())
#define lb(x,a)                   lower_bound(all(x),a)-(x).begin()
#define lb1(x,a)                  lower_bound(all(x),a)-(x).begin()-1
#define allup(x)                  transform(all(x),(x).begin(),::toupper)
#define alllow(x)                 transform(all(x),(x).begin(),::tolower)
#define input(x,n)                for(int i=0; i<(int)(n); i++) cin>>x[i];
#define input2d(x)                for(int i=0;i<(int)(r); i++) for(int j=0; j<(int)(c); j++) cin>>x[i][j];
#define faster_io                 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time                cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define allele(y,x)               for(int i=0; i<x; i++) {cout<<y[i]<<' ';}cout<<nl;
#define allele2d(x)               for(int i=0; i<(int)(r); i++) {for(int j=0; j<(int)(c); j++) cout<<x[i][j]<<' '; cout<<nl;}
#define multiple_test             int t; cin>>t; while(t--) {solve();}
#define single_test               solve();
#define yes                       cout<<"YES\n";
#define no                        cout<<"NO\n";
const int dx[4]= {-1,1,0,0};
const int dy[4]= {0,0,1,-1};
WELCOME_TO_MY_CODE
//vector<vector<int>>p(sz,vector<int>(sz,val));
/*
     0 o
      ^
void givemeinput()
{

}
*/
void solve()
{
     int k;
     cin>>k;
     ll ans=0,cnt=0;
     for(int i=0;cnt<k;i++)
     {
         ll n=i,sum=0;
         while(n>0)
         {
             sum+=n%10;
             n/=10;
         }

         if(sum==10)
         {
             cnt+=1;
             ans=i;

         }
     }

     cout<<ans;


}
/*   o 0
      U
*/
int main()
{
    //freopen("input.txt","r",stdin);freopen("outout.txt","w",stdout);
    faster_io
   // multiple_test
    single_test
    //count_time
    return 0;
}


