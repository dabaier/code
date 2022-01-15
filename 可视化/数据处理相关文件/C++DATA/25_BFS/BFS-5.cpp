void BFS(AdjList *G,int vi)
{
  int i,v,visited[MAXVEX];
  int Qu[MAXVEX],front=0,rear=0;
  ArcNode *p;
  for (i=0;i<G->n;i++)
   visited[i]=0;
cout<<vi<<" ";
visited[vi]=1;
rear=(rear+1)%MAXVEX;
Qu[rear]=vi;
while(front!=rear)
{  front=(front+1)%MAXVEX;
 v=Qu[front];
 p=G->adjlist[v].firstarc;
 while(p!=NULL)
 { if(visited[p->adjvex]==0)
   { visited[p->adjvex]=1;
      cout<<p->adjvex<<" ";
    rear=(rear+1)%MAXVEX;
   Qu[rear]=p->adjvex;
    }
   p=p->next;
     }
 }
}
