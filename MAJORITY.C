// Find a majority element in an array of size n.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,n,j,p=0;
    static int maj;
    clrscr();
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d Element\n",n);
    for(i=0;i<n;i++)
    {
	 scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
	  for(j=i+1;j<n;j++)
	  {
		if(a[i]==a[j])
		{
		      maj++;
		}
	  }
	  if(maj+1>n/2)
	  {
	      printf("Majority element is %d\n",a[i]);
	      p=1;
	      break;
	  }
	  else
	  {
	       maj=0;
	  }
    }
    if(p==0)
    {
	 printf("No majority element are present\n");
    }
    getch();
}