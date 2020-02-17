//Tower of Hanoi main

#include <stdio.h>
#include <math.h>

#define RINGONE '&'
#define RINGTWO '$'
#define RINGTHREE '#'


void printStart();
int ringScan (char ringSelect, char ringOne, char ringTwo, char ringThree);


int main (void) {

	int numMoves = 0;

    char ringOne, ringTwo, ringThree;
    char ringSelect;

    ringOne   = '&';
    ringTwo   = '$';
    ringThree = '#';


	printStart();

    printf("Select ring to move:  \n");
    scanf ("%c",&ringSelect);

    ringScan(ringSelect,ringOne,ringTwo,ringThree);


	return 0;
}

int ringScan (char ringSelect, char ringOne, char ringTwo, char ringThree) {

    switch (ringSelect){
        case RINGONE :
            printf("Selected ring one '%s' \n",ringOne);
            //break;
        case RINGTWO :
            printf("Selected ring two '%s' \n",ringTwo);
            break;
        case RINGTHREE :
            printf("Selected ring three '%s' \n",ringThree);
            break;
        default :
            printf("Not a valid ring \n");
            return 0;
    }

    return 1;
}

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