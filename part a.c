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
<<<<<<< HEAD

=======
int rand(void);
>>>>>>> refs/remotes/origin/master

int main(void) { //main function

/*  int n; //ask user for # of players they want and assign to array lenght
  printf("Enter the amount of players you want in the game\n");
  scanf("%d", &n);
*/
//declation of the arrays
<<<<<<< HEAD
  char names[30]= {}; //max number of players is 6
  char type[30]= {}; // max number of players is 6
=======
  char names[6]= {}; //max number of players is 6
  char type[6]= {}; // max number of players is 6
>>>>>>> refs/remotes/origin/master

  int n;
  printf("Enter the # of players\n");
  scanf("%d", &n);

<<<<<<< HEAD
  if (n>6){ // too many players
    printf("Error: too many players. Choose 6 or less players.\n");}
 
  if (n<2){ // too few players
    printf("Error: too few players. Choose 2 or more players.\n");}
  else
   
=======
  while (n>6 || n<2){ // too many players
    printf("Error: player numbers invalid. Choose a number between 6 and 2 palyers and try again.\n");
  	scanf("%d", &n);}
    
>>>>>>> refs/remotes/origin/master
      if (n>=2 && n<=6){
        printf("Enter player name\n");
        scanf("%s", &names[0]);
        printf("Enter this player's type: \n");
        scanf("%s", &type[0]);
<<<<<<< HEAD
      }
=======
>>>>>>> refs/remotes/origin/master
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
<<<<<<< HEAD
for (i=0; i<n; i++)
{
	if (type[i] == ("HUMAN" || "human")){
		printf("Human capabilities are > 0\n" );
		printf("The total sum of the player capabilities <300\n");
	}	
}

	printf("Proceeding to slot selection\n");

int rand(void);
/* SLOTS
   ******/

	int num_slots;
	printf("Enter the amount of slots you want to have on the game board: ");//prompt for number of slots for game board.
	scanf("%d", &num_slots);

	while (num_slots < n || num_slots >20 || num_slots < 2){
		printf("Error, the numebr of slots cannot be less than that of the players, or greater than 20 or less than 2.\n" );
		printf("Please try again with the above in mind\n");
	}
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
				slottype[1]=("LEVEL GROUND");
				printf("This slot is of type \"LEVEL GROUND\"\n");} //("LEVEL GROUND");}

			else if (random_R == 1){
				slottype[j] = ("CITY");
				printf("This slot is of type \"CITY\"\n");}

			else if (random_R == 2){
				slottype[j] = ("HILL");
				printf("This slot is of type \"HILL\"\n");}

		j++;

	}
  return 0;}
=======

 // **** NEED TO IMPLEMENT RANDOM ALLOCATION OF CAPABILITIES HERE!! **** //


	printf("Proceeding to slot selection\n");



/* SLOTS
************/
	int num_slots;
	printf("Enter the amount of slots you want to have on the game board: ");//prompt for number of slots for game board.
	scanf("%d", &num_slots);
	while (num_slots<2 || num_slots > 20 || num_slots<n){
		printf("Please choose a value less than 20 and greater than 1. This value must be greater than the number of players you selected above. Try again.\n");
		scanf("%d", &num_slots);
	}

	
	printf("You selected %d slots on the game board. These are now being created.\n", num_slots); //print number as entered (TESTING PURPOSE)
	
	// change to SRAND for final version
	srand ( time(NULL));
	num_slots = num_slots*2; //double num_slots because it wouldn't print out the correct amt of slots in the for loop
	
	char slottype;
	int slots[num_slots];
	int j, k=0; //for loop counter
	for (j=0; j<num_slots; j++){ //for loop to assign the slot types to the various slots (number selected by user)
		int random_R= rand()%3; // random seed for random allocation of slots
		slots[j] = random_R;
			if (random_R==0){
				printf("Slot %d is of type \"LEVEL GROUND\"\n", (k+1));} //("LEVEL GROUND");}
			if (random_R == 1){
				//slottype = ("CITY");
				printf("Slot %d is of type \"CITY\"\n", (k+1));}
			if (random_R == 2){
				//slottype = ("HILL");
				printf("Slot %d is of type \"HILL\"\n", (k+1));}
			j++;
			k++;

	}

	// need to do the random allocation of players to slots


  return 0;}
}
>>>>>>> refs/remotes/origin/master
