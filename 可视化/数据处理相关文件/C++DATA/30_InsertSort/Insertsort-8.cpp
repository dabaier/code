void charu(int a[],int n)
{
     int i,j,t,m;
     for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            t=a[i];
            j=i-1;
            do
            {
                a[j+1]=a[j];
                j--;
            }while(j>=0&&a[j]>t);
            a[j+1]=t;
        }
       cout<<i<<":";
       for(m=0;m<n;m++)
       {
           cout<<a[m]<<" ";
       }
       cout<<endl;
    }
}
