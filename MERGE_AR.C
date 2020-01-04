//Program to merge an array of size n into another array of size m+n.

#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
     int a[10],b[20],m,n,i,j,k;
     clrscr();
     printf("Enter size of first array\n");
     scanf("%d",&n);
     printf("Enter array elements\n");
     for(i=0;i<n;i++)
     {
	   scanf("%d",&a[i]);
     }
     printf("Enter size of another array\n");
     scanf("%d",&m);
     printf("Enter array elements\n");
     for(i=0;i<m;i++)
     {
	   scanf("%d",&b[i]);
     }
     sort(a,n);
     sort(b,m);
     printf("\nFirst array is:-\n");
     for(i=0;i<n;i++)
     {
	  printf("%d ",a[i]);
     }
     printf("\nSecond array is :-\n");
     for(i=0;i<m;i++)
     {
	  printf("%d ",b[i]);
     }
     for(i=0;i<n;i++)
     {
	   for(j=0;j<m;j++)
	   {
		if(a[i]>=b[j] && a[i]<=b[j+1])
		{
		     for(k=m;k>j+1;k--)
		     {
			   b[k]=b[k-1];
		     }
		     b[k]=a[i];
		     m++;
		     break;
		}
		else if(a[i]<=b[0])
		{
		     for(k=m;k>0;k--)
		     {
			   b[k]=b[k-1];
		     }
		     b[k]=a[i];
		     m++;
		     break;
		}
		else if(a[i]>=b[m-1])
		{
		     b[m]=a[i];
		     m++;
		     break;
		}
	   }
     }
     printf("\nArray after merging is:-\n");
     for(i=0;i<m;i++)
     {
	  printf("%d ",b[i]);
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