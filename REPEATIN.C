// Program to find two repeating numbers in a given array.

#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
    int i,j,n,a[20];
    clrscr();
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("\nArray after sorting is:-\n");
    for(i=0;i<n;i++)
    {
	  printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
	 for(j=i+1;j<n;j++)
	 {
	      if(a[i]==a[j])
	      {
		     printf("\n%d is repeating element",a[i]);
		     break;
	      }

	 }

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