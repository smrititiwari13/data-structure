#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
}sl;
sl *makenode()
{
	sl *p=(sl *)malloc(sizeof(sl *));
	p->next=0;
	printf("enter data\n");
	scanf("%d",&p->data);
	return p;
}
sl *push(sl *h)
{
	
	sl *p=makenode();
	p->next=h;
	return p;
}
sl *pop(sl *h)
{
	sl *t;
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
	sl *head=0;
    int ch;
    while(1)
    {
        printf("\n1...push");
        printf("\n2....pop");
        printf("\n3...exit");
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: head=push(head);break;
            case 2: head=pop(head);break;
            default:printf("thanks");
            exit(0);
        }
    }
}
