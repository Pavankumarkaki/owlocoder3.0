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
        int s=0,arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        int pre=arr[0],flag=0,i;
        for(i=1;i<n-1;i++)
        {
            if(s-pre-arr[i]==pre)
            {
                flag=1;
                break;
            }
            else{
                pre+=arr[i];
            }
        }
        if(flag)cout<<i<<endl;
        else cout<<-1<<endl;

    }
}
