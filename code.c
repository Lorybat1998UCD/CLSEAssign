#include <stdio.h>
#include <stdbool.h>
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

int rand(void);
int main(void) { //main function

//declation of the arrays
	char names[6]= {}; //max number of players is 6
  	char type[6]= {}; // max number of players is 6

  	int n;
  	printf("Enter the # of players\n");
  	scanf("%d", &n);

	while (n>6 || n<2){ // too many players

    	printf("Error: player numbers invalid. Choose a number between 6 and 2 palyers and try again.\n");

  		scanf("%d", &n);}

    if (n>=2 && n<=6){
   	    printf("Enter player name\n");
       	scanf("%s", &names[0]);
        printf("Enter this player's type: \n");
        scanf("%s", &type[0]);

        int i=1;
        while (i!=n){ //max 6 players and respective types
          ++i;
          printf("Enter next player name: \n");
          scanf("%s", &names[i]);
          printf("Enter this player's type: \n");
          scanf("%s", &type[i]);} 
		} // end if statement

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

// *** SECTION B ***
	srand ( time(NULL)); 
 	if (player==1){ //human
		printf("Player is a human. Capabilities are all greater than 0.\n");
//randomly allocate capabilities while respecting the constraints provided in the line below.

		while ((dexterity + magic + smartness + strenght + luck > 300) && ((magic < 0) && (luck<0) &&(smartness<0) && (strenght<0) && (dexterity<0)));
			luck = rand()%100;
			smartness =rand()%100;
			strenght = rand()%100;
			dexterity = rand()%100;
			magic = rand()%100;
	}
	else if (player==2){ //ogre
		printf("Player is an ogre. Capabilities are as follows by default:\n");
		printf("All Capabilities are greater than or equal to 0\n");
		printf("\t Smartness <= 20\n");
		printf("\t Strenght >= 80\n");
		printf("\t Dexterity >= 80\n");
		printf("\t\t Luck + Smartness <= 50\n");

		magic = 0;
		
		while ((smartness <1 || strenght <1 || dexterity<1 || luck <1 ||) && (smartness > 20 || strenght<80 || dexterity<80 ) && 0((luck+smartness)>50)){
			smartness = rand()%100;
			strenght = rand()%100;
			dexterity = rand()%100;
		}
	}
	else if (player==3)
	{
		printf("Player is an Elf. Capabilities are as follows by default:\n");
		printf("All Capabilities are greater than 0\n");
		printf("\t Luck >= 60\n");
		printf("\t Smartness >= 70\n");
		printf("\t Strenght <= 50\n");
		printf("\t\t 50 < Magic Skills < 80 \n");

		while ((smartness <70 || luck <60 || strenght <50 || (magic>80 || magic <50 ) && (luck !> 0 || smartness !> 0 || dexterity!> 0 || strenght !> 0 || magic !> 0 )){
			smartness = rand()%100;
			strenght = rand()%100;
			luck = rand()%100;
			magic = rand()%100;
			dexterity = rand()%100;
		}
	}
	else if (player==4)
	{
		printf("Player is a Wizard. Capabilities are all greater than 0.\n");
		printf("All Capabilities are greater than 0\n");
		printf("\t Luck >= 50\n");
		printf("\t Smartness >= 90\n");
		printf("\t Strenght<=20\n");
		printf("\t Magic Skills >= 80\n");
		while ((luck !> 0 || smartness !> 0 || dexterity !> 0 || strenght !> 0 || magic !> 0 ) && (luck <60 || smartness < 90 || strenght > 20 || magic < 80))
		{
			smartness = rand()%100;
			dexterity = rand()%100;
			strenght = rand()%100;
			luck = rand()%100;
			magic = rand()%100;			
		}
	}

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
			k++;}

	// need to do the random allocation of players to slots
	char str;
 // *** SECTION C ***

	int i, val;
    for (i=0; i < num_slots; i++) {
        if (slots[i] == hill){
    		if (dexterity < 50){
    		strenght = strenght-10;} //if the slot == the value of the slot type (HILL), decrement strenght by 10 points if the original
    		//dexterity is < 50.
    		else if (dexterity >= 60){ //else if dexterity >= 60, increment strenght by 10 points
    			strenght = strenght +10;}
    		}
    	else if (slots[i] == city){ //if you land on a city slot
    		if (smartness > 60){ //if your smartness > 60
    			magic=magic+10; // you gain 10 magic points
    		}
    		else if (smartness <= 50){ //otherwise, if your smartness is < or = 50, you lose 10 dexterity points
    			dexterity = dexterity -10;

    		}
    	}
    }
 // still need to code section D
return 0; //end of program
