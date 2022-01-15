void InsertSort(int R[],int n)
{
    int i,j,tmp,count=1,k;
    for(i=1;i<n;i++)
    {
        if(R[i-1]>R[i])
        {
            tmp=R[i];
            j=i-1;
            do
            {
                R[j+1]=R[j];
                j--;
            }while(j>=0&&R[j]>tmp);
            R[j+1]=tmp;
        }
        cout<<count<<":";
        for(k=0;k<n;k++)
            cout<<R[k]<<" ";
        cout<<endl;
        count++;
    }
}
