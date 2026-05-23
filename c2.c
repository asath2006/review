#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  char data1;
  struct node*next;
  struct node*prev;
  };
  struct node*head=NULL;
  struct node*tail=NULL;
 void insertid(int id)
 {
    struct node*nn=(struct node*)malloc(sizeof(int));
    nn->data=id;
    nn->next=NULL;
    if(head==NULL)
    {
       head=tail=nn;
       head->prev=NULL;
     }
     else
     {
       nn->next=head;
       head->prev=nn;
       head=nn;
      }
    }
   void insertname(char name)
   {
      struct node*nn=(struct node*)malloc(sizeof(char));
      strlen(nn->data1)=strlen(name);
      nn->next=NULL;
      if(head==NULL)
      {
         head=tail=nn;
         }
         else
         {
          nn->next=head;
          head->prev=NULL;
          head=nn;
          }
         }
   
  void display()
  {
      struct node*temp=head;
      if(head==NULL)
      {
        printf("list is empty");
        return;
       }
       else
       {
           while(temp!=NULL)
           {
                 printf("%d",temp->data);
                  temp=temp->next;
            }
        } 
        printf("\n");
       }
       
    
int main()
{
 
  char name[20];
  int id;
  char st[200];
  scanf("%s",name);
  scanf("%d",&id);
  scanf("%s",st);
  insertid(id);
  display();
  insertname(name);
  display();
  return 0;
  
  }
