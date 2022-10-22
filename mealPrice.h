#include <stdio.h>
#include <stddef.h>

typedef struct {

    double price;

    char *name;

} Meal, *PtrToMeal;

typedef const Meal *PtrToConstMeal;