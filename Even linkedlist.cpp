#include<stdio.h>
#include<malloc.h>
struct linkedlist
{
	int info;
	struct linkedlist *next;
}*start,*nxt;
struct linkedlist *evstart=NULL, *evnxt;
struct linkedlist *createNode(struct linkedlist *start,int info)
{
	if(start==NULL)
	{
		start=(struct linkedlist *)malloc(sizeof(linkedlist));
		start->info=info;
		start->next=NULL;
		//nxt=start;
	}
	else
	{
		start->next=createNode(start->next,info);
	}
	return start;
}
void createevenlist(struct linkedlist *start)
{
	//struct linkedlist *evnxt;
    int i=0;
    //printf("\n%d",start->info);
    while(start)
    {
	    if(start->info%2==0)
	    {
	    	//printf("\n%d",start->info);
	    	evstart=createNode(evstart,start->info);
	    	if(i==0)
	    	{
	    		evnxt=evstart;
	    		i++;
			}
		}	
		start=start->next;
	}
}
void printList(struct linkedlist *start)
{
	while(start!=NULL)
	{ 
		printf("%d ",start->info);
		start=start->next;
	}	
}
int main()
{
	start=NULL;
	int info;
	for(int i=0;i<4;i++){
		scanf("%d",&info);
		start=createNode(start,info);
		if(i==0)
		{
			nxt=start;
		}
	}
	createevenlist(nxt);
	//printf("%d",evnxt->info);
    //printList(nxt);
	printf("\n");
	printList(evnxt);
	scanf("%d",&info);
}
