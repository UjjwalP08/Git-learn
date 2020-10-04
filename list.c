#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

int main()
{
    struct node *head, *new, *temp;
    int choice = 1;

    head = NULL;
    temp = NULL;
    while (choice != 0)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter the Data: \n");
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
        printf("For continue Press 1 and for exit Press 0\n");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("Your Data is %d \n", temp->data);
        temp = temp->next;
    }

    return 0;
}
