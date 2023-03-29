#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,large1,large2;
   int a[10];
   printf("enter the size of the element \n");
   scanf("%d",&n);
   printf("enter the array..\n");

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   large1=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]>large1)

        large1=a[i];

   }
   large2=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]>large2 && a[i]<large1)
        large2=a[i];
   }

   printf("largest number is %d\n",large1);
   printf("second largest number is %d\n",large2);

    printf("registration number:192211188");
   return 0;
}