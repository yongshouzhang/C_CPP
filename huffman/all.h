#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define N 15
typedef struct NODE
{
	int weight;
	int lchild;
	int rchild;
	int parent;
}htnode,*htpointer;
htpointer creattree( int *weight);
void select(htpointer ht,int z,int *f1,int *f2);
char **creatcode(htpointer ht,char **hc);