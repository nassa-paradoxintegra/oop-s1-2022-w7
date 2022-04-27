#include <iostream>
#include <stdlib.h>
#include <string>
#include "musician.cpp"
#include "musician.h"
using namespace std;

int main() {
    Musician *Casey, *Allie;
    Casey = new Musician(7, "Cello");
    Allie = new Musician(4, "Harp");
    return 0;
}

