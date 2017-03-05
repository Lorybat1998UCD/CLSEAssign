# CLSEAssign
Assignment 2 software engineering COMP10050

Lorenzo Battilocchi: committed as of 5/3/17 to part A and provided skeleton code to part C.

1. Defined struct type for players to count the fields of name, type and the various capabilities

2. Declared arrays of size 30 for player name and player type.

3. Created conditions to check input is conform to parameters specified by the Assignment Specification of word document

4. Filled in the arrays with the input strings from user.

5. Initialised the life points to 100 for each of the players.



**** RANDOM ALLOCATION OF CAPABILITIES ACCORDING TO SECTION B ****

 SLOT SORTING SECTION 
 ********************

 1. initialised the random number generator in line 78 (** CHANGE)

 2. Prompted the user to enter the amount of slots they want in the game. 

 3. Check that this can actually be used (w.r.t. Specifications and logic eg. >2, etc.)

 4. Used the modulo operator (%) to scale down the size of our random set to the elements 0, 1, 2.

 5. Used loop in conjunction with if statements to fill the array *** with the slot types.