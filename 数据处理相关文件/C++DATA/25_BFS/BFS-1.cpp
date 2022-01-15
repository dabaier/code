void bfs(adjgraph *G,int v)
{
    int w,i;
    arcnode *p;
    sqqueue *qu;
    initq(qu);
    int visited[maxv];
    for(i=0;i<G->n;i++)
    {
        visited[i]=0;
    }
    cout<<v<<" ";
    visited[v]=1;
    enqueue(qu,v);
    while(!queueempty(qu))
    {
        dequeue(qu,w);
        p=G->adjlist[w].firstarc;
        while(p!=NULL)
        {
            if(visited[p->adjvex]==0)
            {
                cout<<p->adjvex<<" ";
                visited[p->adjvex]=1;
                enqueue(qu,p->adjvex);
            }
            p=p->nextarc;
        }
    }
    cout<<endl;
}

