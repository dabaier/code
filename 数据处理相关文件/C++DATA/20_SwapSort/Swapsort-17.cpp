void bubblesoft(int a[],int n)
{
  int i,j,tmp;
  for(i=0;i<n-1;i++)
  {
      for(j=n-1;j>i;j--)
      {
          if(a[j]<a[j-1])
          {
              tmp=a[j];
              a[j]=a[j-1];
              a[j-1]=tmp;
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
