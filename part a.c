#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/* these arrays are just used to give the parameters to 'insert',
   to create the 'people' array */


/* declare your struct for a person here */
typedef struct{
  char name;
  char type; 
  int capabilities;
}  player; //had to include this here, otherwise error


int main(void) { //main function

/*  int n; //ask user for # of players they want and assign to array lenght
  printf("Enter the amount of players you want in the game\n");
  scanf("%d", &n);
*/
//declation of the arrays
  char names[6]= {}; //max number of players is 6
  char type[6]= {}; // max number of players is 6

  int n;
  printf("Enter the # of players\n");
  scanf("%d", &n);

  if (n>6){ // too many players
    printf("Error: too many players. Choose 6 or less players.\n");}
 
  if (n<2){ // too few players
    printf("Error: too few players. Choose 2 or more players.\n");}
  else
   
      if (n>=2 && n<=6){
        printf("Enter player name\n");
        scanf("%s", &names[0]);
        printf("Enter this player's type: \n");
        scanf("%s", &type[0]);
      }
        int i=1;
        while (i!=n){ //max 6 players and respective types
          ++i;
          printf("Enter next player name: \n");
          scanf("%s", &names[i]);
          printf("Enter this player's type: \n");
          scanf("%s", &type[i]);
      
    } 
    //printf("\n\n");
  int lp=100; // variable lp to hold the initial life points for each player (100)
 
printf("players's life points have been set to 100%%\n");
  /* CODE USED FOR TESTING PURPOSES

  // print the player array here
    //i=0;
  // for (i=0; i<n; i++){ //max 6 players and respective types
   //   printf("Player name: %s", &names[i]); // print the name of the player
     // printf("\t Player type: %s", &type[i]); // print their type
      //printf("\t This player has %d life points\n", lp); // print that they have 100 life points

*/    

 // **** NEED TO IMPLEMENT RANDOM ALLOCATION OF CAPABILITIES HERE!! **** //


	printf("Proceeding to slot selection\n");


int rand(void);
/* SLOTS
************/
	int num_slots;
	printf("Enter the amount of slots you want to have on the game board: ");//prompt for number of slots for game board.
	scanf("%d", &num_slots);
	printf("You selected %d slots on the game board. These are now being created.\n", num_slots); //print number as entered (TESTING PURPOSE)
	
	time_t t;
	// change to SRAND for final version
	int random_R= rand()%3; // random seed for random allocation of slots
	char slottype;
	int slots[num_slots];
	int j; //for loop counter
	for (j=0; j<=num_slots; j++){ //for loop to assign the slot types to the various slots (number selected by user)
		slots[j] = random_R;
			if (random_R==0){
				printf("This slot is of type \"LEVEL GROUND\"\n");} //("LEVEL GROUND");}

			else if (random_R == 1){
				//slottype = ("CITY");
				printf("This slot is of type \"CITY\"\n");}

			else if (random_R == 2){
				//slottype = ("HILL");
				printf("This slot is of type \"HILL\"\n");}

		j++;

	}
  return 0;}
