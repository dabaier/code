void jiaohuan(int a[],int n)
{
    int i,j,t;
for(i=0;i<n-1;i++)
{
    for(j=n-1;j>i;j--)
    {
        if(a[j]<a[j-1])
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
        }
    }
       cout<<i+1<<":";
        for(int m=0;m<n;m++)
        {
            cout<<a[m]<<" ";
        }
        cout<<endl;
}
}
