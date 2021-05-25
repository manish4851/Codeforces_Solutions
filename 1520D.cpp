#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<long long,long long>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]-i]++;

        }
        long long ans=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            long long x=i->second;
            if(x>1)
            ans+=(x*(x-1))/2;
        }
        cout<<ans<<endl;


    }
}
