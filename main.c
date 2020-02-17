//Tower of Hanoi main

#include <stdio.h>
#include <math.h>

#define RINGONE '&'
#define RINGTWO '$'
#define RINGTHREE '#'


void printStart();
int ringScan (int ringSelect, char ringOne, char ringTwo, char ringThree);


int main (void) {

	int numMoves = 0;

    char ringOne, ringTwo, ringThree;
    int ringSelect;

    ringOne   = '&';
    ringTwo   = '$';
    ringThree = '#';


	printStart();
    ringScan(ringSelect,ringOne,ringTwo,ringThree);


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