#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    while (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return 1;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        else if (arr[mid] > x)
            r=mid-1;
        else
                l=mid+1;

        // Else the element can only be present
        // in right subarray

    }

    // We reach here when element is not
    // present in array
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n+2];
    long long sum=0;
    for(int i=0;i<n+2;i++)
        {cin>>arr[i];
        sum+=arr[i];}
    sort(arr,arr+n+2);
    sum-=arr[n+1];
    int x=sum-arr[n+1];
    //cout<<arr;
    //cout<<x<<endl;
    cout<<x<<"   "<<binarySearch(arr,arr[0],arr[n],x)<<endl;
    if(binarySearch(arr,arr[0],arr[n],x))
    {
        for(int i=0;i<n+1;i++)
        {
            if(arr[i]==x)
            {    x=-1;

                continue;

            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<-1<<endl;
    }
}
