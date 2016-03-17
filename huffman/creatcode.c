#include "all.h"
char **creatcode(htpointer ht,char **hc)
{
	
    
	char cd[N];
	int i,p,c;
	int t;
hc=(char **)malloc((N+1)*sizeof(char *));
	for(i=0;i<N;i++)
	{
	     t=N-1;
	    cd[t]='\0';
		c=i;
		p=ht[i].parent;
		while(p!=0)
		{
			if(ht[p].lchild==c)
				cd[--t]='0';
			else
				cd[--t]='1';
			c=p;
			p=ht[p].parent;
		}
	hc[i]=(char *)malloc((N-t)*sizeof(char));
		strcpy(hc[i],&cd[t]);
	}
	return hc;
}