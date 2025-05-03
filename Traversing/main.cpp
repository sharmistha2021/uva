#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
     int array[100],i,n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter array elements: \n");
   for(i=0;i<n;i++){
     scanf("%d",&array[i]);
     printf("\n");
   }

   for(i=0;i<n;i++){
     printf("\n array[%d] = %d",i,array[i]);
   }
    return 0;
}
