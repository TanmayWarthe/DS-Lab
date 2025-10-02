#include<stdio.h>
#define MAX 10

int stack[MAX];
int top =-1,capacity = MAX-1;

int isFull(){
    return top == capacity;
}


int isEmpty(){
    return top == -1;
}


void push(int x){
    if(isFull()){
        printf("Stack OverFlow\n");
    }else{
        top++;
        stack[top]=x;
        printf("%d pushed in the stack!!!\n",x);
    }
}


void pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
    }else{
        printf("%d poped from the stack!!!\n",stack[top]);
        top--;
    }
}


void display(){
    if(isEmpty()){
        printf("No element in the stack !\n");
    }else{
        printf("Stack Element :");
        for(int i=0; i<= top; i++){
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}







int main(){

    int ch;
    do{
        printf("--- Stack Operation ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter value to push: ");
            int value;
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
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

}