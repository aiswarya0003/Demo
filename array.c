#include<stdio.h>
#include<stdlib.h>
int a[30];
int n;
void create()
{
    printf("enter the limit");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void insert()
{
int l,num;
printf("Enter the location to insert");
scanf("%d",&l);
printf("Enter the number:");
scanf("%d",&num);
  if (l<0||l>n)
   { 
     printf("invalid location");
   }
  else
     {
      for(int i=n-1;i>=l;i--)
       {
         a[i+1]=a[i];
       }
       a[l]=num;
       n++;
       printf("\n new number inserted");
     }
}

void delete()
{
  if(n==0)
  { 
    printf("Array is empty");
  }
 else
  {
    int l;
    printf("Enter the location to delete(0 to %d):",n-1);
    scanf("%d",&l);
     if (l<0||l>=n)
    {
      printf("\n invalid location");
    }
    else 
     { 
       for (int i=l;i<n-1;i++)
        {
          a[i]=a[i+1];
        }
        n--;
        printf("\n Deleted element");
     }
   }
}

void show()
{ 
if(n==0)
  {
    printf("array empty");
  }
else
  {

    for(int i=0;i<n;i++)
      {
      printf("%d\t",a[i]);
      }
   }
}

void main()
{
  int c;
  create();
  while(1)
   { 
    printf("\n 1.Insert");
    printf("\n 2.Delete");
    printf("\n 3.Show");     
    printf("\n 4.Exit");
    printf("\nEnter a choice:");
    scanf("%d",&c);
    switch(c)
      { 
         case 1:insert();break;
         case 2:delete();break;
         case 3:show();break;
         case 4:exit(0);
         default:printf("invalid choice");
      }
   }
}
         
