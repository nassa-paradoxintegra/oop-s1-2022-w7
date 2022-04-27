#include <iostream>
#include <stdlib.h>
#include <string>
#include "musician.h"

Musician::Musician() {
    experience = 0;
    instrument = "none";
}

Musician::Musician(string pexperience, string pinstrument) {
    experience = pexperience;
    instrument = pinstrument;
}