void bubblesoft(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		cout<<i+1<<":";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
}
