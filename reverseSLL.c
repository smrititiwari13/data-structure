#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}l;
l* makenode()
{
    int d;
    printf("enter data");
    scanf("%d",&d);
    l* p=(l *)malloc(sizeof(l));
    p->data=d;
    p->next=0;
    return p;
}
l* addfirst(l* h)
{
    l* p =makenode();
    p->next=h;
    return p;
}
l* reverse(l* head)
{
    l* curr=head;
    l*prev=0;
    while(curr!=NULL)
    {
        l* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void display(l* h)
{
    while(h)
    {
        printf("%d ",h->data);
        h=h->next;
       
    }
}
int main()
{
    l* head=0;
    int len;
    printf("enter lenth");
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    head=addfirst(head);
    printf("original list\n");
    display(head);
    printf("\nreversed list\n");
    head=reverse(head);
    display(head);
   
    return 0;
    
}
