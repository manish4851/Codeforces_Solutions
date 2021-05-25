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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        vector<int>v;
        int x;
        int pos=n-1;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
                {pos=i-1;break;}
             if(i<n-1)
             {

               x=abs(arr[i+1]-arr[i]);
            v.push_back(x);
            if(x<mini)
                mini=x;
             }
        }
       int temp=pos;
      // cout<<pos<<"   "<<mini<<endl;
        for(int i=pos;i<n;i++)
        {
            if(arr[i]<=mini)
            {
                temp=i;
                if(arr[i]==mini)
                    mini=INT_MIN;
            }
            else
                break;
        }
        if(v.size()==0)
            cout<<1<<endl;
        else
        cout<<temp+1<<endl;

        //cout<<n-temp<<endl;
    }
}

