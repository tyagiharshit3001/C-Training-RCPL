#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

void insert_at_beginning(void);
void insert_at_location(int pos);
void insert_at_end(void);
void del_at_beginning(void);
void del_at_end(void);
void del_at_loction(int pos);
int get_len(void);
void display(void);
void search(int value);



int main()
{
    int war;
    do
    {
    printf("\n****************************Main Menu****************************");
    printf("\n 1. Insert data at beginning");
    printf("\n 2. Insert data at End");
    printf("\n 3. Insert data at location");
    printf("\n 4. Delete data at beginning");
    printf("\n 5. Delete data at end");
    printf("\n 6. Delete data at location");
    printf("\n 7. Display Linked List");
    printf("\n 8. Search Value");
    printf("\n\n Enter Option: ");
    int opt;
    int pos;

    switch(opt)
    {
    case 1:
        printf
        insert_at_beginning();
        break;
    case 2:
        insert_at_end();
        break;
    case 3:
        printf("\n Enter Location: ");
        scanf("%d",&pos);
        insert_at_location(pos);
        break;
    case 4:
        del_at_beginning();
        break;
    case 5:
        del_at_end();
        break;
    case 6:
        printf("\n Enter Location: ");
        scanf("%d",&pos);
        del_at_loction(pos);
        break;
    case 7:
        display();
        break
    case 8:
        printf("\n Enter value to search: ");
        scanf("%d",&pos);
        search(pos);
        break;
    case 9:
        printf("Length of Linked list: %d",get_len());
        break;
    default:
        printf("\nInvalid option");
        break;
    }

    printf("\n You want more (0/1): ");
    scanf("%d",&war);
    }while(war);






    insert_at_beginning();
    insert_at_beginning();
    insert_at_beginning();
    insert_at_beginning();
    insert_at_end();
    insert_at_end();
    display();
    printf("\n %d",get_len());
    insert_at_location(3);
    display();
    del_at_beginning();
    display();
    del_at_end();
    display();
    del_at_loction(3);
    display();

}


insert_at_beginning()
{
    struct Node *ptr;
    int data;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    if (ptr == NULL)
        printf("\nBuffer overflow");
    else
    {
        printf("\n Enter data: ");
        scanf("%d", &data);
        ptr->data = data;
        ptr->next = head;
        head = ptr;
    }
}

int get_len()
{
    struct Node *temp;
    temp = head;
    int len = 0;
    while (temp)
    {
        len += 1;
        temp = temp->next;
    }
    return len;
}


insert_at_location(int pos)
{
    struct Node *ptr, *temp;
    int count = 0;
    int data;


    if (pos >get_len())
    {
        printf("Position doesn't exist in linked list.");
    }
    if (pos == get_len())
        insert_at_end();

    if (pos == 0)
        insert_at_beginning();

    if (pos >0 && pos <get_len())
    {
        ptr = (struct Node *)malloc(sizeof(struct Node));

        temp = head;
        while(count != pos-1)
        {
            temp = temp->next;
            count ++;
        }
        printf("\n Enter data: ");
        scanf("%d", &data);
        ptr->next = temp->next;
        temp->next = ptr;
        ptr->data = data;


    }

}



insert_at_end()
{
    struct Node *ptr;
    struct Node *temp;
    int data;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    if (ptr == NULL)
        printf("\nBuffer overflow");
    else
    {
        temp = head;
        if (temp == NULL)
            insert_at_beginning();
        else
        {
            printf("\n Enter data: ");
            scanf("%d", &data);
            while(temp->next)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->data = data;
            ptr->next = NULL;
        }
    }
}


del_at_beginning()
{
    if (head == NULL)
        printf("Linked List is empty.");
    else
    {
        struct Node *ptr=NULL;
        ptr = head;
        head = head->next;
        free(ptr);
    }

}

del_at_end()
{
    if (head == NULL)
        printf("\n Linked List is empty");
    else
    {
        struct Node *temp, *ptr;
        temp = head;
        while(temp->next->next)
            temp = temp->next;
        ptr = temp->next;
        temp->next = NULL;
        free(ptr);
    }


}

del_at_loction(int pos)
{
    struct Node *ptr, *temp;
    int count = 0;


    if (pos >get_len())
    {
        printf("Position doesn't exist in linked list.");
    }
    if (pos == get_len())
        del_at_end();

    if (pos == 0)
        del_at_beginning();

    if (pos >0 && pos <get_len())
    {
        temp = head;
        while(count != pos-1)
        {
            temp = temp->next;
            count ++;
        }
        ptr = temp->next;
        temp->next = temp->next->next;
        //free(ptr);


}
}


void display()
{
    printf("\n");
    struct Node *ptr;
    ptr = head;
    if (ptr == NULL)
        printf("\n Empty Linked List");
    else{
        while(ptr!=NULL)
        {
            printf("--> %d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
