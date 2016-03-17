#include "all.h"
void select(htpointer ht,int z,int *f1,int *f2)
{
	int min, s1,s2;
	int i;
	for(i=0;i<=z;i++)
	{
		if(ht[i].parent==0)
		{
			s1=i;
			min=ht[i].weight;
			break;
		}
	}

	for(i=0;i<=z;i++)
	{
		if(ht[i].weight<min&&ht[i].parent==0)
		{
				s1=i;
				min=ht[i].weight;
		}
	}

	for(i=0;i<=z;i++)
	{
		if(ht[i].parent==0&&i!=s1)
		{
			s2=i;
				min=ht[i].weight;
				break;
		}
	}

	for(i=0;i<=z;i++)
	{
			if(ht[i].weight<min&&i!=s1&&ht[i].parent==0)
			{
					s2=i;
					min=ht[i].weight;
			}
	}
			
	*f1=s1;
	*f2=s2;
}