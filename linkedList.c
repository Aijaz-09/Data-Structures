#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
}*head = NULL;

void createSLL(int x)
{
  printf("SLL doesn't exist, creating first node...\n");
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = x;
  newNode->next = NULL;
  head = newNode;
}


//This function should work for insertion for all cases: pos(0,1...)
void insertSLL(int x, int pos)
{
    if(head == NULL)
    {
        createSLL(x);
        return;
    }

    if(pos == 0)  // 0 means insert at start
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        return;
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = x;
        struct Node *temp = head;
        for(int i=0; i<pos-1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
        printf("Position out of range!\n");
        free(newNode);
        return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void displaySLL()
{
  if(head == NULL)
    printf("Linked List doesn't exist.");
  else
  {
    struct Node *temp = head;
    while(temp != NULL)
    {
      printf("%d ", temp->data);
      temp=temp->next;
    }
    printf("\n");
  }
}


int main() {
    insertSLL(5, 0);
    insertSLL(12, 1);


    displaySLL();

    insertSLL(23, 0);
    displaySLL();

    insertSLL(51, 1);
    displaySLL();

    insertSLL(210, 12);
    displaySLL();
    return 0;
}
