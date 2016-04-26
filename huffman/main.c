#include "all.h"
#include <stdlib.h>
int main()
{       
        FILE *fp;
        int i;
	int weight[N]= { 20,18,7,30,15,6,9,23,17,33,25,19,32,12,28};
        char **hc=NULL;
	char str[N];
	htpointer huffmantree;
	for (i=0;i<N;i++)
	{
		str[i]='A'+i;
	}
        for (i=0;i<N;i++)
        {
          printf(" %d ",weight[i]);
         }
puts("\n");
       
        huffmantree=creattree(weight);
	hc=creatcode(huffmantree,hc);  
        fp=fopen("huffman.txt","w+");
         if(fp==NULL)
           {
             puts("open the file falied!");
              exit(0); 
             }
	for (i=0;i<N;i++)
	{       fprintf(fp,"%c  %s  \t ",str[i],hc[i]);
		printf("%c    %s\t",str[i],hc[i]);
		//	puts("\n");
	}
fclose(fp);
system("pause");
return 0;
}
