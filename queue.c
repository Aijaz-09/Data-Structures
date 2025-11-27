#include<stdio.h>
#include<stdlib.h>

struct Queue
{
  int size;
  int front;
  int rear;
  int *Q;
};

void enqueue(struct Queue *q, int x)
{
  if(q->rear == q->size-1)
    printf("Queue is Full.\n");
  else
  {
    q->rear++;
    q->Q[q->rear] = x;
  }
}

int dequeue(struct Queue *q)
{
  int x = -1;
  if(q->front == q->rear)
    printf("Queue is Empty.\n");
  else
  {
    q->front++;
    x = q->Q[q->front];
  }
  return x; // Will return -1 if queue was empty
}

void create(struct Queue *q, int size)
{
  q->size = size;
  q->front = q->rear = -1;
  q->Q = (int *)malloc(q->size*sizeof(int));
}

void display(struct Queue q)
{
  int i;
  for(i = q.front+1; i <= q.rear; i++) // Displaying Front to Rear
    printf("%d ", q.Q[i]);
  printf("\n");
}

int main()
{
  struct Queue q;
  create(&q, 5);

  enqueue(&q,2);enqueue(&q,3);enqueue(&q,5);
  display(q);
  dequeue(&q);dequeue(&q);
  display(q);
  enqueue(&q,11);enqueue(&q, 15);
  display(q);
  enqueue(&q, 50);  // queue is full already.
  display(q);
  return 0;
}
