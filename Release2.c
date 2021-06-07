/*
  Nicholas Vigliotte
  ITT-310
  May 30, 2021
 Jeremy Wright
------------------------

 CHORE-TELLER
   Ver. 2.0
*/

#include <stdio.h>
#include <stdlib.h>

//Variable for entering current day of the week
int dayOfWeek;

//Declare & Initialize choreCost array - defined payouts for each chore
int choreCost[4] = { 5, 10, 15, 20 };

//Main function that contains loop and decision for chores
int main()
{
	//Prints the welcome message and prompts the user for day of the week
	printf("Welcome to the Chore-Teller!");
	printf("\nPlease enter the day of the week (Monday = 1, Sunday = 7): ");
	scanf_s("%d", &dayOfWeek);


	//Switch function that tells chore and the corresponding payout 
	switch (dayOfWeek)
	{
	case 1:
		printf("\nChore of the Day: Sweep Floors\n");
		printf("Payout: $%d", choreCost[2]);
		break;
	case 2:
		printf("\nChore of the Day: Dust the House\n");
		printf("Payout: $%d", choreCost[1]);
		break;
	case 3:
		printf("\nChore of the Day: Take out Trash\n");
		printf("Payout: $%d", choreCost[0]);
		break;
	case 4:
		printf("\nChore of the Day: Clean Bathroom\n");
		printf("Payout: $%d", choreCost[2]);
		break;
	case 5:
		printf("\nChore of the Day: Clean the Kitchen\n");
		printf("Payout: $%d", choreCost[1]);
		break;
	case 6:
		printf("\nChore of the Day: Laundry Day!\n");
		printf("Payout: $%d", choreCost[0]);
		break;
	case 7:
		printf("\nChore of the Day: No Chores :) Enjoy the Day!\n");
		printf("Payout: $%d", choreCost[3]);
		break;
	default: printf("Input was not valid!");
		break;
	}
	//End of chore to day switch

	//End Function
	return 0;
}
