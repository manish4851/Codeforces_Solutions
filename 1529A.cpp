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
        int mini=INT_MAX;
        int freq=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<mini)
            {
                mini=arr[i];
                freq=1;
            }
            else if(arr[i]==mini)
            {
                freq++;
            }
        }
        cout<<n-freq<<endl;
    }
}
