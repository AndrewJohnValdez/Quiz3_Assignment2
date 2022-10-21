#include <stdio.h>
#include <stddef.h>

typedef struct {

    double price;

    char *name;

} meal, *PtrToMeal;

typedef const meal *PtrToConstMeal;