#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of players you are going to input");
    scanf("%d", &n);
    
    if (n>6 || n<2){
      printf("Error: too many or too few players selected. Try again!");
    else if (n<6 && n>1){
    
      int **sArray;
      sArray = (int **)malloc(n * sizeof(int *));

      int i;
      for(i = 0; i < n; i++){
          sArray[i] = (int *)malloc(2 * sizeof(int));
          scanf("%d %d", &sArray[i][1], &sArray[i][2]);} 
     }
     
     return 0;
}
