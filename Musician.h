#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
class Musician {
private:
std::string instrument2;
int experience2;
std::string instrument;
int experience;
public:
Musician();
Musician(std::string instrument, int experience);
std::string get_instrument();
int get_experience();
};
#endif


