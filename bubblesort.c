#include <stdio.h>
void bubblesort(int a, int n)
{
  int i,j,temp,swapped;
  for(i=0;i<n;i++)
  { 
    swapped=0;
    for(j=0;j<n-i-1;j++)
      {
        if (a[j]>a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        swapped=1;
        }
      }
    if (!swapped)
    { 
      break;
     }
   }
 }
 
 int main()
 { 
 int a[10],i,n;
 printf("program for bubble sort\n");
 printf("Enter the array size:");
 scanf("%d",&n);
 printf("Enter the array element:");
 for (i=0;i<n;i++)
   {
     scanf("%d",& [i] );
   }
  bubblesort (a,n);
  printf("sorted array:");
  printf Array(a,n);
  return 0;
  
  }
