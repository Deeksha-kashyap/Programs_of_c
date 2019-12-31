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
void Insertion(int pos,int data)
{
	struct linkedlist *temp;
	start=nxt;
	for(int i=1;i<pos-1;i++)
	{
		start=start->next;
	}
	temp=(struct linkedlist *)malloc(sizeof(linkedlist));
	temp->info=data;
	temp->next=start->next;
    start->next=temp;
}
void printList(struct linkedlist *start)
{
	start=nxt;
	while(start!=NULL)
	{ 
		printf("%d ",start->info);
		start=start->next;
	}	
}
int main()
{
	start=NULL;
	int info,data,pos;
	for(int i=0;i<4;i++){
		scanf("%d",&info);
		start=createNode(start,info);
		if(i==0)
		{
			nxt=start;
		}
	}
	printf("Enter the data");
	scanf("%d",&data);
	printf("Enter the postion");
	scanf("%d",&pos);
	Insertion(pos,data);	
	//printf("%d",evnxt->info);
    //printList(nxt);
//	printf("\n");
	printList(evnxt);
	scanf("%d",&info);
}
