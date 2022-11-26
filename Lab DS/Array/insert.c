#include<stdio.h>

#define size 5

int stack[size];
int index = -1;

int isFull()
{

     if(index == size - 1){
        return 1;
    }
    else{
        return 0;
    }

}
int isEmpty()
{
   if(index == -1){
        return 1;
    }
    else{
        return 0;
    }

}

void push(int value)
{
    if(isFull()){
        printf("OVERFLOW\n");
    }
    else{
       index++;
       stack[index] =  value;
    }


}
int pop()
{

    if(isEmpty){
        printf("UNDERFLOW\n");
    }
    else{
        index --;
        return stack[index+1];
    }

}


void main()
{

   int i;

   int jekono;
   scanf("%d",&jekono);

   push(jekono);

   for(i=0;i<=index;i++){
    printf("%d is in index %d\n",stack[i],i);
   }


}