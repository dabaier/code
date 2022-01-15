void insertsoft(int a[],int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
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
