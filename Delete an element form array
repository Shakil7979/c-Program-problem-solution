
#include <stdio.h>

int main()
{
   int array[100], position, n, c;
   printf("Enter number of Element of array\n");
   scanf("%d",&n);
   printf("Enter %d element \n", n);
   for(c=0; c<n; c++)
    scanf("%d",&array[c]);
    printf("Enter the location where you want to delete\n");
    scanf("%d",&position);
    if(position >= n+1)
    printf("Delete not possible\n");
    else{
        for(c=position-1; c<n-1; c++ )
        array[c] = array[c+1];
        for(c=0; c<n-1; c++)
        printf("%d",array[c]);
    }
    return 0;
}
