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
        int max=INT_MAX;
        int pos;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<max)
            {
                max=arr[i];
                pos=i;
            }
        }
        int ans=0;
        vector<vector<int>>anss;
        for(int i=0;i<n-1;i++)
        {
           arr[i]=max;
           arr[i+1]=max+abs(pos-i);
           ans++;
           anss.push_back({pos+1,i+1,max,max+abs(pos-i+1)});

        }
        cout<<ans<<endl;
        for(int i=0;i<anss.size();i++)
        {
            cout<<anss[i][0]<<" "<<anss[i][1]<<" "<<anss[i][2]<<" "<<anss[i][3]<<endl;
        }
    }
}
