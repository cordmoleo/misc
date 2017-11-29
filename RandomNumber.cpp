#include <time.h>
#include "RandomNumber.h"

RandomNumber::RandomNumber(unsigned long s) {
    if(s == 0)
        randSeed = time(0);
    else
        randSeed = s;
}

unsigned short RandomNumber::random(unsigned long n) {
    randSeed = multiplier * randSeed + adder;
    return (unsigned short)((randSeed >> 16) % n);
}

double RandomNumber::fRandom() {
    return random(maxshort)/double(maxshort);
}