void exchange(int a[],int n)
{
    int s=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
        }
        s++;
        cout<<s<<":";
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}
