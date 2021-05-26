#include <bits/stdc++.h>
using namespace std;

#define ll long long

void my_dbg() { cout << endl; }
template<typename Arg, typename... Args> void my_dbg(Arg A, Args... B)
{ cout << ' ' << A; my_dbg(B...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", my_dbg(__VA_ARGS__)

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,ini,n) for(ll i=ini;i<(int)n;i++)
#define all(x) x.begin(),x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define tc   int tt; cin>>tt; while(tt--)
#define gcd __gcd
#define endl "\n"
#define inf INT_MAX
#define ninf INT_MIN

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.14159265358979323846264

const ll M =1e9+7;
const int N = 1e6+7;



int main()
{
    fast();

    tc{
        int x;
        cin>>x;
        int cnt=0;
        int m=1;
        while(cnt<x)
        {
            cnt+=m;
            m++;
        }
       // m--;
        if((cnt-x)==1)
        cout<<m<<endl;
        else
        cout<<m-1<<endl;

    }

return 0;
}
