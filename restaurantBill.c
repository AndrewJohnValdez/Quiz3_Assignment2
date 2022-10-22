#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mealPrice.h"

int main(int argc, char *argv[]) {

extern const int MealTableEntries;

extern Meal MealTable[];

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

//Get price of randomly chosen meal
mealCost = MealTable[randnum].price;

//Method to calculate the tax 
tax = mealCost * (taxValue / 100.0);

//Method to calculate the tip by three choices that are displayed and based on user input
tip = mealCost * (tipValue / 100.0);

//Method to calculate the total cost of all variables that were supplied such as tax, tip, and meal cost
totalCost = mealCost + tax + tip;

//Display results such as meal cost, tax, tip, and total 
printf("////////////////////////\n");

printf("Tax is: %.2f%%\n", taxValue);

printf("tip is: %.2f%%\n", tipValue);

printf("Meal Cost: %.2f\n", mealCost);

printf("Tax Amount: %.2f\n", tax);

printf("Tip Amount: %.2f\n", tip);

printf("Total Cost: %.2f\n", totalCost);

printf("////////////////////////\n");

return EXIT_SUCCESS;
}
