#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;


int isFull(){
    return rear == MAX-1;
}



int isEmpty(){
    return rear == -1 || front > rear;   
}


void enqueue(int x){
    if(isFull()){
        printf("Queue is full !!!\n");
        return;
    }
    if(front == -1){
        front = 0;
    }

    rear++;
    queue[rear] = x;
    printf("%d is enqueue in queue.\n",x);
}


void dequeue(){
    if(isEmpty()){
        printf("Queue is empty !!!\n");
        return;
    }
    printf("%d is dequeue from queue.\n",queue[front]);
    if(front == rear){
        front = rear = -1;
    }else{
        front++;
    }

}



void display(){
    if(isEmpty()){
        printf("No element in the queue.\n");
    }
    printf("Queue elements are :\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n",queue[i]);
    }
    printf("\n");

}


int main(){

    int ch;

    do{
        printf("--- Queue Operation ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter value to enqueue : ");
            int value;
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }while(ch!=4);



    return 0;
}