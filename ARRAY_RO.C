// Program to rotate array of size n by d elements.

#include<stdio.h>
#include<conio.h>
void main()
{
     int d,n,a[20],i,j=0,temp;
     clrscr();
     printf("Enter size of array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	   scanf("%d",&a[i]);
     }
     printf("Enter d element from which you want to rotate array\n");
     scanf("%d",&d);
     printf("\nArrays are:-\n");
     for(i=0;i<n;i++)
     {
	  printf("%d ",a[i]);
     }
     while(j<d)
     {
	  temp=a[0];
	  for(i=0;i<n-1;i++)
	  {
	       a[i]=a[i+1];
	  }
	  a[i]=temp;
	  j++;
     }
     printf("\n\nArray after rotation is:-\n");
      for(i=0;i<n;i++)
     {
	  printf("%d ",a[i]);
     }
     getch();

}