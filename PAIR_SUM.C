// find a pair in an array of size n whose sum is x.

#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void push(int,int);
int pop();
int stack[50],top=-1;
void main()
{
    int n,X,l,u,L,U,a[20],i;
    clrscr();
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d element\n",n);
    for(i=0;i<n;i++)
    {
	 scanf("%d",&a[i]);
    }
    printf("Enter value X of whose sum pair you want to find\n");
    scanf("%d",&X);
    sort(a,n);
    l=0;
    u=n-1;
    while(l<u)
    {
	 if(a[l]+a[u]==X)
	 {
	      push(a[u],n);
	      push(a[l],n);
	      l++;
	 }
	 else if(a[l]+a[u]>X)
	 {
	      u--;
	 }
	 else
	 {
	      l++;
	 }
    }
    while(top!=-1)
    {
	  L=pop();
	  U=pop();
	  printf("\nOne of the pair of array whose sum is %d is (%d,%d)",X,L,U);

    }
    getch();
}

void sort(int a[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       for(j=i-1;j>=0 && temp<a[j];j--)
       {
	  a[j+1]=a[j];
       }
       a[j+1]=temp;
   }

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