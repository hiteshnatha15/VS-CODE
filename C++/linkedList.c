#include <stdio.h>
#include <stdlib.h> // Add this line to include the <stdlib.h> header file

struct Node
{
    int data;
    struct Node* next;
};

struct Node*head=NULL;

struct Node* createNode()
{
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &n->data);
    n->next=NULL;
    return n;
}

void insertAtHead()
{
    struct Node* temp;
    temp=createNode();

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    
}
void traverse(struct Node* temp)
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}

int main() {
    // Your code here
    insertAtHead();
    insertAtHead();
    insertAtHead();
    traverse(head);
    return 0;
}
