#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include "Musician.h"
#include <string>

class Orchestra{
    private:
    int size1;
    int current_members;
    Musician* list1;
    int size2;
    std::string list2;
    public:
    Orchestra();
    Orchestra(int size2);
    int get_current_number_of_members();
    bool has_instrument(std::string instrument);
    Musician *get_members();
    bool add_musician(Musician new_musician);
    ~Orchestra();
};


#endif