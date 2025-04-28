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
		p->next=p;
		return p;
	}
	if(h->next==h)
	{
		h->next=p;
		p->next=h;
		return h;
	}
	t=h;
	while(t->next!=h)
	{
		t=t->next;
	}
	t->next=p;
	p->next=h;
	return h;

}
q *DeleteFromq(q *h)
{
	q *t,*p;
	if(h==0)
	{
		printf("stack underflow");
		
		return 0;
	}
	if(h->next==h)
	{
		printf("\ndeleting...%d",h->data);
		free(h);
		return 0;
	}
	t=h;
	while(t->next!=h)
	t=t->next;
	p=h;
	h=h->next;
	t->next=h;
	printf("deleting... %d",p->data);
	free(p);
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
