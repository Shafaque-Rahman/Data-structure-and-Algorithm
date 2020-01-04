// Program to reverse an array.

#include<stdio.h>
#include<conio.h>
void push(int,int);
int pop();
int stack[20],top=-1;
void main()
{
     int a[20],i,n;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter %d Elements\n",n);
     for(i=0;i<n;i++)
     {
	 scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
	    push(a[i],n);
     }
     for(i=0;i<n;i++)
     {
	    a[i]=pop();
     }
     printf("Reverse array is\n");
     for(i=0;i<n;i++)
     {
	   printf("%d",a[i]);
     }
     getch();
}
void push(int p,int n)
{
    if(top==n-1)
    {
       printf("Stack overflow\n");
       return;
    }
    top++;
    stack[top]=p;
}
int pop()
{
    int p;
    if(top==-1)
    {
       printf("Stack is empty\n");
    }
    p=stack[top];
    top--;
    return p;
}