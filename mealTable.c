#include <string.h>
#include <stdlib.h>
#include "mealPrice.h"

mealPrice mealTable[] =
{
    {"Salad", 9.95}, 
    {"Soup", 4.55},
    {"Sandwich", 13.25},
    {"Pizza", 22.35}
};

const int mealTableEntries = sizeof(mealTable)/sizeof(mealTable[0]);