void BubbleSort(int a[],int n)
{
    int i,j,tmp;
    //bool exchange;
    for(i=0; i<n-1; i++)
    {
        //exchange=false;
        for(j=n-1; j>i; j--)
            if(a[j]<a[j-1])
            {
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
                //exchange=true;
            }
        cout<<i+1<<':';
        for(int i=0;i<n;i++)
            cout<<a[i]<<' ';
            cout<<endl;
        //if(!exchange) return;
    }
}
