#ifndef PRACTICE1_H
#define PRACTICE1_H
#include <string>
class Musician {
private:
std :: string instrument2;
int experience2;
public:
Musician();
Musician(std::string instrument, int experience);
std::string get_instrument();
int get_experience();
};
#endif
