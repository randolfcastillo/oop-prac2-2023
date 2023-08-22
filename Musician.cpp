#include "Musician.h"
Musician::Musician(){
    instrument="Null";
    experience=0;
} 
Musician::Musician(std::string instrument, int experience) {
    instrument2=instrument;
    experience2=experience;
}

std::string Musician::get_instrument(){
    return instrument2;
}
int Musician::get_experience() {
    return experience2;
}


