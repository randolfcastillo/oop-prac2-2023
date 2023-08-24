#ifndef MUSICIAN1_H
#define MUSICIAN1_H
#include <string>
class Musician {
private:

public:
Musician();
std :: string instrument2;
int experience2;
std :: string instrument;
int experience;
Musician(std::string instrument, int experience);
std::string get_instrument();
int get_experience();
};
#endif
