#include <string.h>
#include <stdlib.h>
#include "mealPrice.h"

Meal MealTable[] =
{
    {9.95, "Salad"}, 

    {4.55, "Soup"},

    {13.25, "Sandwich"},
    
    {22.35, "Pizza"}
};

const int MealTableEntries = sizeof(MealTable) / sizeof(MealTable[0]);


