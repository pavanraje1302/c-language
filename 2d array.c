#include<stdio.h>
int main()
{
   int values[5];
   int i;

   printf("Enter 5 integers:");

   for(i=0;i<5;++i)
   {
       scanf("%d", &values[i]);

   }

   printf("Displaying integers: ");

   for(int i=0;i<5;++i)
   {

    printf("%d\n", values[i]);

   }

    return 0;
}
