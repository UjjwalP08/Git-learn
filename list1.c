#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
    int info;
    struct list *next;
} node;
void display(node *);
node *create()
{
    node *root, *prev, *newnode;
    int c, d, n;
    printf("Enter the Data(-999) to stop:->");
    scanf("%d", &n);
    root = prev = NULL;
    while (n != -999)
    {
        newnode = (node *)malloc(sizeof(node));
        newnode->info = n;
        newnode->next = NULL;
        if (root == NULL)
        {
            root = newnode;
        }
        else
        {
            prev->next = newnode;
        }
        prev = newnode;
        printf("\nEnter the Data(-999) to stop:->");
        scanf("%d", &n);
    }
    return root;
}
int main()
{
    display();
    return 0;
}
