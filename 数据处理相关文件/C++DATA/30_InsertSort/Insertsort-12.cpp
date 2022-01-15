void insertsoft(int a[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            temp=a[i];
            j=i-1;
            do
            {
                a[j+1]=a[j];
                j--;
            }while(j>=0&&a[j]>temp);
            a[j+1]=temp;
        }
        cout<<i<<":";
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    }
}
