#include <stdio.h>
#include <stddef.h>

typedef struct {

    float price;

    char *name;

} Meal, *PtrToMeal;

typedef const Meal *PtrToConstMeal;