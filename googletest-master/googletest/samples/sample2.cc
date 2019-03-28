#include <math.h>
#include "sample2.h"
extern double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { 
        return -1.0;
    }

    else{
        return sqrt(a);
    }
}
