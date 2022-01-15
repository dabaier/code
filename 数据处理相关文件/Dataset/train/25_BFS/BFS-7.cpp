void BFS(AdjGraph *G,int v)
{
    int w,i;
    ArcNode *p;
    SqQueue *qu;
    InitQueue(qu);
    int visited[MAXV];
    for(i=0;i<G->n;i++) visited[i]=0;
    cout<<v<<" ";
    visited[v]=1;
    enQueue(qu,v);
    while(!QueueEmpty(qu))
    {
        deQueue(qu,w);
        p=G->adjlist[w].firstarc;
        while(p!=NULL)
        {
            if(visited[p->adjvex]==0)
            {
                cout<<p->adjvex<<" ";
                visited[p->adjvex]=1;
                enQueue(qu,p->adjvex);
            }
            p=p->nextarc;
        }
    }
    cout<<endl;
}
