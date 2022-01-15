void BFS(AdjGraph *G,int v)
{
	int w,i;
	ArcNode *p;
	SqQueue *qu;
	InitQueue(qu);
	int visited2[MAXV];            
	for(i=0;i<G->n;i++)
		visited2[i]=0;            
	cout<<v<<" ";                
	visited2[v]=1;
	enQueue(qu,v);            
	while(!QueueEmpty(qu))            
	{
		deQueue(qu,w);        
		p=G->adjlist[w].firstarc;                        
		while(p!=NULL)                        
		{
			if(visited2[p->adjvex]==0)        
			{
				cout<<p->adjvex<<" ";        
				visited2[p->adjvex]=1;        
				enQueue(qu,p->adjvex);    
			}
			p=p->nextarc;                    
		}
	}
	cout<<endl;
}
