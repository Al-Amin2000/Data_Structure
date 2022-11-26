#include<stdio.h>
int main()
{
    int arr [10],search ,i,item;
    printf("Enter number of elements in arr:\n");
    scanf("%d",&item);
     printf("Enter  element:\n",i);
     for (i=0;i<item;i++)
        scanf("%d",&arr[i]);
        printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < item; i++){
    if(arr[i]==search){
        printf ("%d item is match: index:%d",search,i+1);
        break;
    }
  }

     if(i==item)

    printf ("%d item is not match:",search);
    return 0;
}
