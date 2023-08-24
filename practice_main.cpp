#include <iostream>
#include "practice1.h"

int main(){
    Musician player1;
    Musician player2("Banjo", 8);

    std :: cout << "The player has " << player1.get_experience() << " years of experience playing the " << player1.get_instrument() <<"."<< std :: endl;
    std :: cout << "The second player has " << player2.get_experience()<< " years of experience playing the " << player2.get_instrument()<<"."<< std :: endl;
    return 0;
}
