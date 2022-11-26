#include<stdio.h>

int main(){
   int array[50], i,j,value,temp;
   printf("Enter the No: of elements in the list:");
   scanf("%d", &value);
   printf("Enter the elements:");
   for(i=0; i<value; i++){
      scanf ("%d", &array[i]);
   }
   printf("Before bubble sorting the elements are:");
   for(i=0; i<value; i++)
      printf("%d \t", array[i]);
   for (i=0; i<value-1; i++){
      for (j=i+1; j<value; j++){
         if (array[i] > array[j]){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
         }
      }
   }
   printf ("After bubble sorting the elements are:");
   for (i=0; i<value; i++)
      printf("%d\n", array[i]);
   return 0;

}
