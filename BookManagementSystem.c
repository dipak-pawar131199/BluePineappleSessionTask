#include<stdio.h>
# include<string.h>
# include<stdlib.h>

typedef struct node
{
    int bid;
    char bname[10];
    char author[10];
    int cost;
}node;

typedef struct book
{
    node data;
    struct book *next; 
}book;

void createsystem(book *head)
{
    // create system with some initial records
    book *temp,*newnode;
    temp=head;
    int n,i;
    printf("\nhow many books?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(book *)malloc(sizeof(book));
        printf("\nEnter book id ");
        scanf("%d",&newnode->data.bid);
        printf("\nEnter name of book");
        scanf("%s",newnode->data.bname);
        printf("\nEnter name of author");
        scanf("%s",newnode->data.author);
        printf("\nEnter cost of book");
        scanf("%d",&newnode->data.cost);
        temp->next=newnode;
        newnode->next=NULL;
        temp=newnode;
    } 

} 
void display(book *head)
{
    book *temp;
    
    for(temp=head->next;temp!=NULL;temp=temp->next)
    {
        printf("\nBook_id: %d",temp->data.bid);
        printf("\nBook_name: %s",temp->data.bname);
        printf("\nBook_Author: %s",temp->data.author);
        printf("\nBook_Cost: %d",temp->data.cost);
    }
}
int searchById(book *head,int id)
{
    int pos;
    book *temp;
    for (temp=head->next,pos=1;temp!=NULL;temp=temp->next,pos++)
    {
        if (temp->data.bid==id)
        {
            return pos;
        }
    }
   return -1; 
}
void deleteById(book *head,int id)
{
    int pos=searchById(head,id);
    book *temp,*temp1;
    int i;
    for(temp=head,i=1;temp->next!=NULL &&i<=pos-1;i++)
       temp=temp->next;
    if(temp->next==NULL)
    {
        printf("position out of range");
        return;
    }   
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}
void InsertBook(book *head,int pos)
{
    int i,x;
    book *temp,*newnode;
    temp=head;
    newnode=(book *)malloc(sizeof(book));
    newnode->next=NULL;
    printf("Enter book id");
    scanf("%d",&newnode->data.bid);
    x=searchById(head,newnode->data.bid);
    while (x!=-1)
    {
        printf("Unavailable book id=%d ",newnode->data.bid);
        printf("Enter book id");
        scanf("%d",&newnode->data.bid);
        x=searchById(head,newnode->data.bid);
    }
    printf("Enter book name");
    scanf("%s",newnode->data.bname);
    printf("Enter book Author name");
    scanf("%s",newnode->data.author);
    printf("Enter book cost");
    scanf("%d",&newnode->data.cost);
        for(temp=head,i=1;temp!=NULL&&i<=pos-1;i++)
            temp=temp->next;
        if(temp==NULL)
         {
               printf("Position is out of range");
               return;
         }
         newnode->next=temp->next;
         temp->next=newnode;
  
}
void main()
{
    book *head;
    int choice,n;
    int id,pos;
    head=(book *)malloc(sizeof(book));
    head->next=NULL;
    do
    {
        printf("\n1)Create");
        printf("\n2)display");
        printf("\n3)delete");
        printf("\n4)search");
        printf("\n5)Ineser book");
        printf("\n6)exit");
        
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                     createsystem(head);
                     break;
            case 2: display(head);
                     break;
            case 3:  printf("Enter id of  book be deleted");
                     scanf("%d",&id);  
                     deleteById(head,id);
                     display(head);
                     break;
            case 4:  printf("Enter book id to search");
                     scanf("%d",&id) ;
                     pos=searchById(head,id);
                     if (pos==-1)
                     {
                         printf("No such book available having id=%d",id);
                     }
                     else
                     {
                         printf("Book having id=%d is Availabel at position=%d",id,pos);
                         display(head);
                     }
                     break;
            case 5: printf("Enter positon where you want to insert book");
                    scanf("%d",&pos);
                    InsertBook(head,pos);
                    display(head);
                    break; 

            case 6:exit(0);                                           
        }
       

    }while(choice!=6);


}