#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};

void display(struct node *start);
struct node *addatbeg(struct node *start,int num);
void addatend(struct node *start,int num);
struct node *del(struct node *start,int num);

int main()
{
    struct node *start=NULL;
    int choice,num;
    while(1)
    {
        printf("1.Display\n");
        printf("2.Insert At Begining\n");
        printf("3.Insert At end\n");
        printf("4.Delete From List\n");
        printf("9.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            display(start);
            break;
        case 2:
            printf("Enter The Number To Be Inserted: ");
            scanf("%d",&num);
            start=addatbeg(start,num);
            break;
        case 3:
            printf("Enter The Number To Be Inserted: ");
            scanf("%d",&num);
            addatend(start,num);
            break;
        case 4:
            printf("Enter The Number To Be Deleted: ");
            scanf("%d",&num);
            start=del(start,num);
            break;
        case 9:
            exit(1);
        default:
            printf("Invalid Choice\n\n");
        }
    }
    return 0;
}

void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
    {
        printf("empty\n\n");
        return;
    }
    p=start;
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->link;
    }
    printf("\n\n");
    return;
}

struct node *addatbeg(struct node *start,int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=num;
    temp->link=start;
    start=temp;
    return start;
}

void addatend(struct node *start,int num)
{
    struct node *temp,*p;
    if(start==NULL)
    {
        printf("The List Is Empty.\n\n");
        return;
    }
    p=start;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=num;
    temp->link=NULL;
    p->link=temp;
    return;
}
struct node *del(struct node *start,int num)
{
    struct node *temp,*p;
    if(start==NULL)
    {
        printf("Nothing To Delete.\n\n");
        return start;
    }
    if(start->info==num)
    {
        temp=start;
        start=start->link;
        free(temp);
        return start;
    }
    p=start;
    while(p->link!=NULL)
    {
        if(p->link->info==num)
        {
            temp=p->link;
            p->link=temp->link;
            free(temp);
            return start;
        }
        p=p->link;
    }
    printf("The Number Does not Exist.\n\n");
    return start;
}







