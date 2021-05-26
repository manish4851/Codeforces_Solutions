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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=s.length();
        int count=0;
        rep(i,0,l)
        {
            if(s[i]=='0')
                count++;
        }
        if(n==1&&s[0]=='1')
        cout<<"DRAW"<<endl;
        else if(count>1&&count%2!=0)
            cout<<"ALICE"<<endl;
        else
        cout<<"BOB"<<endl;
    }

return 0;
}
