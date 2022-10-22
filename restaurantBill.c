//restaurantBill.c
/*
Program Requirements:
Values are to be passed as arguments (argc & argv)
Compute tax and tip on restaurant bill
    tax and tip are both percentages as command line arguments
        California Tax = 9.75%
        Tip: 5%, 10%, 15%
ask for patron name?
Meal cost added up
Total cost overall

*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mealPrice.h"


long randomize();

int main(int argc, char *argv[]) {

extern const int MealTableEntries;

extern Meal MealTable[];

PtrToMeal matchPtr;

char *ptrTax;
char *ptrTip;

int randnum;
double mealCost;
double totalCost;
double tax;
double tip;
double taxValue;
double tipValue;
time_t t;

srand((unsigned)time(&t));

//To take arguments from command line, read tax first then tip last
taxValue = strtod(argv[1], &ptrTax);
tipValue = strtod(argv[2], &ptrTip);

//Randomizer for choosing the type of food wanted, 1 out of the 4
randnum = rand() % MealTableEntries;
mealCost = MealTable[randnum].price;

//Method to calculate the tax 
tax = mealCost * (taxValue / 100.0);

//Method to calculate the tip by three choices that are displayed and based on user input
tip = mealCost * (tipValue / 100.0);

//Method to calculate the total cost of all variables that were supplied such as tax, tip, and meal cost
totalCost = mealCost + tax + tip;

//Display results such as meal cost, tax, tip, and total bill
printf("tax test: $%.2f\n", tax);
printf("tip Test: $%.2f\n", tip);
printf("mealCost Test: $%.2f\n", MealTable[randnum].price);
printf("total cost test: $%.2f\n", totalCost);

return EXIT_SUCCESS;
}
