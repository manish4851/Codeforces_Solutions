#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=1,y=1;
        x=x*pow(10,a-c);
        x=x*pow(10,c-1);
        for(int i=0;i<b-c;i++)
        {
            y=1+y*10;
        }
        y=y*pow(10,c-1);;
        cout<<x<<" "<<y<<endl;
    }
}