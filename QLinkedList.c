#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
}q;
q *makenode()
{
	q *p=(q *)malloc(sizeof(q *));
	p->next=0;
	printf("enter data\n");
	scanf("%d",&p->data);
	return p;
}
q *insertInQueue(q *h)
{
	q *t;
	q *p=makenode();
	if(h==0)
	{
		return p;
	}
	t=h;
	while(t->next!=0)
	{
		t=t->next;
	}
	t->next=p;
	return h;

}
q *DeleteFromq(q *h)
{
	q *t;
	if(h==0)
	{
		printf("stack underflow");
		return 0;
	}
	t=h;
	h=h->next;
	printf("deleting... %d",t->data);
	free(t);
	return h;
}


void main()
{
	q *head=0;
    int ch;
    while(1)
    {
        printf("\n1...insert in queue");
        printf("\n2....delete from queue");
        printf("\n3...exit");
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: head=insertInQueue(head);break;
            case 2: head=DeleteFromq(head);break;
            default:printf("thanks");
            exit(0);
        }
    }
}
