#include<stdio.h>
int MAXSIZE=8;
int stack[8];
int top=-1;
int IS_EMPTY()
 {
 if(top=-1)
  return 1;
 else
  return 0;
 }
int IS_FULL()
 {
 if(top==MAXSIZE) 
  return 1;
 else
  return 0;
 }
int PEEK()
 {
  return stack[top];
 }
int pop()
 {
  int data;
 if(!IS_EMPTY())
  {
   data=stack[top];
   top=top-1;
   return data;
  }
 else
  {
   printf("couldn't retrive data , stack is empty \n");
  }
 }
int push(int data)
 {
  if(!IS_FULL())
   {
    top=top+1;
    stack[top]=data;
   }
  else
   {
    printf("could not insert data , stack is full \n");
   }
 } 
int main()
{
 //push items into  the stack
 push(3);
 push(5);
 push(9);
 push(11);
 push(12);
 push(15);
 printf("Element at top of the stack : %d\n",PEEK());
 printf("Element : %d\n",stack[top]);
 //print stack data
 while (!IS_EMPTY())
  {
   int data=pop();
   printf("%d\n",data);
  }
 printf("Stack Full : %s\n",IS_FULL()?"True":"False");
 printf("Stack Empty : %s\n",IS_EMPTY()?"True":"False");
return 0;
}

