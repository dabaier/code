void BFS(MatGraph a,int k)
{
    int i=k,j=0,s,x=0,y=0,counts=1;
    second[k]=1;
    int d[a.n];
    cout<<k;
    while(counts<a.n)
    {
        while(j<a.n)
        {
            if(a.edges[i][j]==1&&second[j]==0)
            {
                second[j]=1;
                cout<<" "<<j;
                d[x]=j;x++;
                counts++;
            }
            j++;
        }
        i=d[y];
        y++;
        j=0;
    }

}
