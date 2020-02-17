//Tower of Hanoi main

#include <stdio.h>
#include <math.h>

#define RINGONE '&'
#define RINGTWO '$'
#define RINGTHREE '#'


void printStart();
int ringScan (int ringSelect, char ringOne, char ringTwo, char ringThree);
int poleScan (int poleSelect, int poleOne, int poleTwo, int poleThree);

int main (void) {

	int numMoves = 0;

    char ringOne, ringTwo, ringThree;
    int ringSelect;

    int poleOne, poleTwo, poleThree;

    poleOne = 1;
    poleTwo = 2;
    poleThree = 3;


    ringOne   = '&';
    ringTwo   = '$';
    ringThree = '#';


	printStart();
    ringSelect = ringScan(ringSelect,ringOne,ringTwo,ringThree);

    printf("%d\n",ringSelect);

	return 0;
}

int ringScan (int ringSelect, char ringOne, char ringTwo, char ringThree) {

    printf("Select ring to move:  \n");
    scanf("%d",&ringSelect);

    if (ringSelect==1){
        printf("Selected ring one '%c' \n",ringOne);
    }
    else if(ringSelect==2){
        printf("Selected ring two '%c' \n",ringTwo);
    }
    else if (ringSelect==3){
        printf("Selected ring three '%c' \n",ringThree);
    }
    else{
        printf("Not a valid ring \n");
        return 0;        
    }
    return ringSelect;
}

// Print function for beginning the game
void printStart(){

	printf("\n\n");
	printf("     1        2         3\n");
	printf("|        |         |         |\n");
	printf("|        |         |         |\n");
	printf("|    |   |    |    |    |    |\n");
	printf("|   &&&  |    |    |    |    |\n");
	printf("|   &&&  |    |    |    |    |\n");
	printf("| $$$$$$ |    |    |    |    |\n");
	printf("| $$$$$$ |    |    |    |    |\n");
	printf("|########|    |    |    |    |\n");
	printf("|########|    |    |    |    |\n");
	printf("------------------------------\n");

}