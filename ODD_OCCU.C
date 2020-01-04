//Find the number occurring odd number of times in a given array of size n.

#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
    int a[20],i,n,j,p=0;
    static int occurence=0,q;
    clrscr();
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d Element\n",n);
    for(i=0;i<n;i++)
    {
	 scanf("%d",&a[i]);
    }
    sort(a,n);
     for(i=0;i<n;i=i+q)
    {
	  for(j=i;j<n;j++)
	  {
		if(a[i]==a[j])
		{
		      occurence++;
		      q++;
		}
	  }
	  if(occurence%2!=0)
	  {
	      printf("Odd occurence of element is %d\n",a[i]);
	      p=1;
	  }
	  occurence=0;
	  i=0;
    }
    if(p==0)
    {
	 printf("No Odd occurence of element are present\n");
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