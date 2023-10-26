#ifndef AVATAR_H
#define AVATAR_H
#include "GridUnit.h"

class Avatar:public GridUnit{
    private:
    public:
    Avatar(int x, int y){
    coordinates=std::make_tuple(x,y);
    entity='A';
    }

    void shift(int dx, int dy){
        std::tuple <int, int> current_coordinates=getCoordinates();
 int x= std::get<0> (current_coordinates);
int y= std:: get<1> (current_coordinates);

 x=x+dx;
 y=y+dy;

 setCoordinates(x,y);
}
    

};

#endif