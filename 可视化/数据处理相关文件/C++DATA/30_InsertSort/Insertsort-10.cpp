void insertsoft(int a[],int n)
{
	int i,j,tmp;
	for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
        cout<<i<<":";
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}
