#include <stdio.h>

int main()
{
   int array1[20],oddarray[20],evenarray[20];
   int arrayIndex,odd=0,even=0;
   
   printf("Enter how many index you want to put\n");
   scanf("%d",&arrayIndex);
   printf("Enter %d Elements \n",arrayIndex);
    for(int i=0; i<arrayIndex; i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0; i<arrayIndex; i++){
        if(array1[i]%2 == 0){
            oddarray[odd] = array1[i];
            odd++;
        }
        else{
            evenarray[even] = array1[i];
            even++;
        }
    }
    printf("The Odd Elements are: \n");
    for(int i=0; i<odd; i++){
        printf("%d",oddarray[i]);
    }
    printf("\n The Even Elements are: \n");
    for(int i=0; i<even; i++){
        printf("%d",evenarray[i]);
    }
    return 0;
}
