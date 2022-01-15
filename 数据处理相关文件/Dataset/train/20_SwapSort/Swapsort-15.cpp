void BubbleSort(int R[],int n)
{
    int i,j,count=1,k;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(R[j-1]>R[j])
                swap(R[j-1],R[j]);
        }
        cout<<count<<":";
        for(k=0;k<n;k++)
            cout<<R[k]<<" ";
        cout<<endl;
        count++;
    }
}
