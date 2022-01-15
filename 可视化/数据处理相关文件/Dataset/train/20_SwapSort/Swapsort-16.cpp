void bubblesort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
            if(a[j]<a[j-1])
        {
            int tmp=a[j];
            a[j]=a[j-1];
            a[j-1]=tmp;
        }
        cout<<i+1<<":";
        for(k=0;k<n;k++)
        {
            if(k!=n-1)
                cout<<a[k]<<" ";
            else
                cout<<a[k]<<endl;
        }
    }
}

