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
    l* p=(l *)malloc(sizeof(l*));
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
void search(l* head ,int n)
{
    l* first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        return;
        first=first->next;
    }

    l* second=head;
    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    printf("%d",second->data);


}
int main()
{
    l* head=0;
    int n;
    int len;
    printf("enter lenth");
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    head=addfirst(head);
    printf("enter position");
    scanf("%d",&n);
    search(head,n);
    return 0;
    
}
