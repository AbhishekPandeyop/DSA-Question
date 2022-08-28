#include<stdio.h>
#include<stdlib.h>

struct Arrstack
{
 int top;
 int capacity;
 int *Array;
};
struct Arrstack* createstack(int cap){
    struct Arrstack *stack;
    stack = malloc(sizeof(struct Arrstack));
    stack->capacity=cap;
    stack->top= -1;
  stack->Array = malloc(sizeof(int)*stack->capacity);
  return (stack);
}
 int isFull(struct Arrstack *stack)
{
    if (stack->top==stack->capacity-1)
    return(1);
    else 
    return(0); 
}
int isEmpty(struct Arrstack *stack){
    if(stack -> top ==-1){
        return (1);
    }
    else 
    return (0);
}

void push(struct Arrstack *stack,int item)
{    
    if(!isFull(stack))
    {
        stack->top++;
        stack->Array[stack->top]=item;

    }
}
int pop(struct Arrstack *stack){
  int item; 
    if(!isEmpty(stack)){
        item = stack->Array[stack->top];
        stack->top--;
        return(item);
    }
    return (-1);
}

int main (){
    int choice,item;
    struct Arrstack *Stack;
    Stack =createstack(4);
    
while(1);
{
  
    printf("\n1 push");
     printf("\n2 pop");
      printf("\n3 Exit");
       printf("\n4 enter your choice");
   switch(choice){
    case 1:
    printf("\n Enter a number");
    scanf("%d",& item);
    push(Stack,item);
    break;
   case 2:
   item=pop(Stack);
   if(item==-1)
   printf("Stack is empty");
   else
   printf("\n poped value is %d",item);
   break;
   case 3:
   exit(0);
   default:
   printf("Error");
   }
}
}