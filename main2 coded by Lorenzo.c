#include <stdio.h>

int main(){
	int i, k;
	int n, max=6, min=2;
	printf("Enter the amount of players you will enter below: \n");

	scanf("%d", &n);
	if (n>max){
		printf("Error: too many players. Choose 6 or less players.\n");
	}
	else if (n<min){
		printf("Error: too few players. Choose 2 or more players.\n");
	}


	else{
		printf("Enter the players: \n");
		int array[n][2] = {0}; //inititalise array
		for (i = 0; i < n; i++){ //nested for loops to fill array
   			for (k = 0; k < 2; k++){
      			scanf("%d", &array [i][k]);	
      			}
   			}
   		}
   	
   	return 0;
}
