void sort1(int a[],int n)
{
    int s=0;
    for(int j=1;j<n;j++)
        {
            int tmp=a[j];
            if(a[j]<a[j-1])
            {
                int k=j-1;
                while(k>=0&&tmp<a[k])
                {
                    a[k+1]=a[k];
                    k--;
                }
                a[k+1]=tmp;;
            }
            s++;
            cout<<s<<":";
            for(int m=0;m<n;m++)
            {
                cout<<a[m]<<" ";
            }
            cout<<endl;
        }

}

