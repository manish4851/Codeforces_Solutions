#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
        res = (res * a)%1000000007;

        a = (a * a)%1000000007;
        b >>= 1;
    }
    return res%1000000007;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        cout<<binpow(n,k)<<endl;
    }
}
