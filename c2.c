#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    char data1[20];

    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

void insertid(int id)
{
    struct node *nn = (struct node*)malloc(sizeof(struct node));

    nn->data = id;
    strcpy(nn->data1, "");

    nn->next = NULL;
    nn->prev = NULL;

    if(head == NULL)
    {
        head = tail = nn;
    }
    else
    {
        nn->next = head;
        head->prev = nn;
        head = nn;
    }
}

void insertname(char name[])
{
    struct node *nn = (struct node*)malloc(sizeof(struct node));

    nn->data = 0;
    strcpy(nn->data1, name);

    nn->next = NULL;
    nn->prev = NULL;

    if(head == NULL)
    {
        head = tail = nn;
    }
    else
    {
        nn->next = head;
        head->prev = nn;
        head = nn;
    }
}

void display()
{
    struct node *temp = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(temp != NULL)
    {
        printf("ID = %d , Name = %s\n",
               temp->data,
               temp->data1);

        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    char name[20];
    int id;

    scanf("%s", name);
    scanf("%d", &id);

    insertid(id);
    insertname(name);

    display();

    return 0;
}
