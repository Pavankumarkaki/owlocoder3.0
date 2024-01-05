int main()//AND of a range
{
    TakeInput();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    //binary in 32
    int arr[n][32];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if((v[i] & 1<<j)>0)
                arr[i][31-j]=1;
            else
                arr[i][31-j]=0;
        }
    }
    //prefix array
    int pre[n][32];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(i==0)
            {
                pre[i][j]=arr[i][j];
            }
            else{
                pre[i][j]=arr[i][j]+pre[i-1][j];
            }
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<32;j++)
    //     {
    //         cout<<pre[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0,d=b-a+1;
        if(a==0)
        {
            for(int j=0;j<32;j++)
            {
                if(pre[b][j]==d)
                {
                    ans+=pow(2,31-j);
                }
            }
        }
        else{
            for(int j=0;j<32;j++)
            {
                if(pre[b][j]-pre[a-1][j]==d)
                    ans+=pow(2,31-j);
            }
        }

        cout<<ans<<endl;
    }


}
