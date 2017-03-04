#include <stdio.h>

enum SlotType {Ground, City, Hill};

int main (void){
	int slottype;
	enum SlotType slottype;
	int num;
	switch (num){
		case 1:
			default; //capabilities should be unchanged
		case 2:
			if (dexterity<50){ //if dexterity is less than 50
				strenght -=10;} //take 10 from strenght
			else if (dexterity>50){ //if dexterity > 50
				strenght += 10;} // add 10 to strenght
		case 3:
			if (smartness > 60){
				magic += 10;}
			else if (smartness <= 50){
				dexterity -=10;}
	}
	return 0;
}