/* Program to find the maximum difference between two elements such that
 larger element appears after the smaller element. */

#include<stdio.h>
#include<conio.h>
void main()
{
     int n,a[20],i,j,dif,max=0;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	   scanf("%d",&a[i]);
     }
     printf("Array is:-\n");
     for(i=0;i<n;i++)
     {
	   printf("%d ",a[i]);
     }

     for(i=0;i<n;i++)
     {
	 for(j=i+1;j<n;j++)
	 {
	      if(a[i]<a[j])
	      {
		  dif=a[j]-a[i];
	      }
	      if(max<dif)
	      {
		   max=dif;
	      }
	 }
     }
     printf("\nMaximum difference is %d",max);
     getch();
}