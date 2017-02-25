//players stats file
//pseudocode in c
int main(int argc, char const *argv[])
{
	int player;

	scanf("%d", &player);

	if (player==1){
		printf("Player is a human. Capabilities are all greater than 0.\n");
	}
	else if (player==2){
		printf("Player is an ogre. Capabilities are as follows by default:\n");
		printf("All Capabilities are greater than 0\n");
		printf("\t Smartness <= 20\n");
		printf("\t Strenght >= 80\n");
		printf("\t Dexterity >= 80\n");
		printf("\t\t Luck + Smartness <= 50\n");
	}
	else if (player==3)
	{
		printf("Player is an Elf. Capabilities are as follows by default:\n");
		printf("All Capabilities are greater than 0\n");
		printf("\t Luck >= 60\n");
		printf("\t Smartness >= 70\n");
		printf("\t Strenght <= 50\n");
		printf("\t\t 50 < Magic Skills < 80 \n");
	}
	else if (player==4)
	{
		printf("Player is a Wizard. Capabilities are all greater than 0.\n");
		printf("All Capabilities are greater than 0\n");
		printf("\t Luck >= 50\n");
		printf("\t Smartness >= 90\n");
		printf("\t Strenght<=20\n");
		printf("\t Magic Skills >= 80\n");
	}
	return 0;
}