#include <stdio.h>

int main(){
	int i, k;
	int n, max=6, min=2;
	
	//prompt user to enter the number of players they will enter
	printf("Enter the amount of players you will enter below: \n");
	scanf("%d", &n);
	
//check that the number of players to be entered abides to the rules of the game
	if (n>max){
		printf("Error: too many players. Choose 6 or less players.\n");
	}
	else if (n<min){
		printf("Error: too few players. Choose 2 or more players.\n");
	}
//double check array initialisation
//when the rules are abided, proceed to take in the parameters from the user
	char array[n][2] = {0}; //inititalise array
	if (n>=min && n<=max){
		printf("Enter the players: \n");
		char array[n][2] = {0}; //inititalise array
		for (i = 0; i < n; i++){ //nested for loops to fill array
   			for (k = 0; k < 2; k++){
      			scanf("%d", &array [i][k]);	
      			}
   			}
   		}
   	
   	for (i=0; i<n; i++){
   		for (k=0; k<2; k++){
   			printf("%s", array[i][k]);
   		}
   	}

   	struct Player {
   		char  name[50];
   		char  type[50];
   	}
   	book;  
   	return 0;
}
