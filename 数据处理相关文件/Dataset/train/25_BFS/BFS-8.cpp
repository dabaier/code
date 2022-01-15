void BFS(AdjGraph *g,int v)
{
	int w,i;
	ANode *p;
	Queue *qu;
	initQueue(qu);
	int visited2[MAXV];
	for(i=0;i<g->n;i++)
		visited2[i]=0;
	cout<<v<<" ";
	visited2[v]=1;
	enQueue(qu,v);
	while(!QueueEmpty(qu))
	{
		deQueue(qu,w);
		p=g->adjlist[w].first;
		while(p!=NULL)
		{
			if(visited2[p->adjvex]==0)
			{
				cout<<p->adjvex<<" ";
				visited2[p->adjvex]=1;
				enQueue(qu,p->adjvex);
			}
			p=p->next;
		}
	}
	cout<<endl;
}
