#include "all.h"
htpointer creattree(int *w)
{
	htpointer ht;
	int i,m;
	int a,b;
	m=2*N-1;
	ht=(htpointer)malloc((m+1)*sizeof(htnode));
	for(i=0;i<N;i++)
	{
		ht[i].weight=w[i];
		ht[i].lchild=ht[i].rchild=ht[i].parent=0;
	}
	for(i=N;i<m;i++)
	{
		ht[i].weight=ht[i].lchild=ht[i].rchild=ht[i].parent=0;
	}
		for(i=N;i<m;i++)
		{
			select(ht,i-1,&a,&b);
			ht[a].parent=ht[b].parent=i;
			ht[i].lchild=a;
			ht[i].rchild=b;
			ht[i].weight=ht[a].weight+ht[b].weight;
		}
		return ht;
	
}