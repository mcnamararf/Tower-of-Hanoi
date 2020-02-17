//Tower of Hanoi main

#include <stdio.h>
#include <math.h>

#define RINGSTRING '#'


void printStart();
int ringScan (int ringSelect);
int poleScan (int poleSelect, int poleOne, int poleTwo, int poleThree);

int main (void) {

	int numMoves = 0;

    char ringOne, ringTwo, ringThree;
    int ringSelect, poleSelect;

    int poleOne, poleTwo, poleThree;

    poleOne = 1;
    poleTwo = 2;
    poleThree = 3;


	printStart();
    ringSelect = ringScan(ringSelect);
    poleScan(poleSelect,poleOne,poleTwo,poleThree);

    printf("%d\n",ringSelect);

	return 0;
}

int poleScan (int poleSelect, int poleOne, int poleTwo, int poleThree) {

    printf("Select pole to move:  \n");
    scanf("%d",&poleSelect);

    if (poleSelect==1){
        printf("Selected pole one : '%d' \n",poleOne);
    }
    else if(poleSelect==2){
        printf("Selected pole two : '%d' \n",poleTwo);
    }
    else if (poleSelect==3){
        printf("Selected pole three : '%d' \n",poleThree);
    }
    else{
        printf("Not a valid pole \n");
        return 0;        
    }
    return poleSelect;
}


int ringScan (int ringSelect) {

    printf("Select ring to move:  \n");
    scanf("%d",&ringSelect);

    if (ringSelect==1){
        printf("Selected ring one \n");
    }
    else if(ringSelect==2){
        printf("Selected ring two \n");
    }
    else if (ringSelect==3){
        printf("Selected ring three \n");
    }
    else{
        printf("Not a valid ring \n");
        return 0;        
    }
    return ringSelect;
}

// Print function for beginning the game
void printStart(){
    
    char empty[10]     =    "         ";
    char pole[10]      =    "    |    ";
    char ringOne[10]   =    "  #####  ";
    char ringTwo[10]   =    " ####### ";
    char ringThree[10] =    "#########";


    printf("\n\n");
	printf("     1        2         3\n");
	printf("|%s|%s|%s|\n",empty,empty,empty);
	printf("|%s|%s|%s|\n",empty,empty,empty);
	printf("|%s|%s|%s|\n",pole,pole,pole);
	printf("|%s|%s|%s|\n",pole,pole,pole);
	printf("|%s|%s|%s|\n",pole,pole,pole);
	printf("|%s|%s|%s|\n",pole,pole,pole);
	printf("|%s|%s|%s|\n",ringOne,pole,pole);
	printf("|%s|%s|%s|\n",ringTwo,pole,pole);
	printf("|%s|%s|%s|\n",ringThree,pole,pole);
	printf("-------------------------------\n");

}