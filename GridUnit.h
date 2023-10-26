#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <iostream>
#include <tuple>

class GridUnit{
protected:
std::tuple<int,int> coordinates;
char entity;
public:
GridUnit(){
coordinates=std::make_tuple(0,0);
entity='0';
}

GridUnit(int x, int y, char entity){
    coordinates=std::make_tuple(x,y);
    this->entity=entity;
}
char getEntity(){
    return entity;
}

std::tuple<int,int> getCoordinates(){
    return coordinates;
}

void setCoordinates(int x, int y){
    coordinates=std::make_tuple(x,y);
}

void setEntity(char entity){
    this->entity=entity;
}
};

#endif




// class GameEntity{
// protected:
// std::tuple <int, int> position;
// char type;
// public:
// GameEntity(){
// position=std::make_tuple(0,0);
// type='0';
// };
// GameEntity(int x, int y, char type){
//     position=std::make_tuple(x,y);
//     this->type=type;
// };

// GameEntity(int x, int y){
//     position=std::make_tuple(x,y);
// }
// std::tuple<int,int> getPos(){
//     return position;
// };

// void setPos(std::tuple <int, int> position){
//     this->position=position;
// }
// char getType(){
//     return type;
// }
// void setType(char type){
//     this->type=type;
// }

// virtual void virtualFunction() {} // A virtual function, even if empty
// };

// #endif

// Effect:
// #ifndef EFFECT_H
// #define EFFECT_H
// #include "GameEntity.h"
// class Effect{
//     private:
//     public:
//   virtual void apply(GameEntity& entity)=0;
// };

// #endif

// Utils:
// #ifndef UTILS_H
// #define UTILS_H
// #include <random>
// #include<tuple>
// #include "GameEntity.h"
// #include "Effect.h"
// class Utils{
//     // private:
//     // std::tuple<int,int> randposition;
//     public:
//    static std::tuple<int,int> generateRandomPos(int gridWidth, int gridHeight){
//         int x= std::rand() % gridWidth;
//         int y=std::rand()% gridHeight;
//    // randposition=std::make_tuple(x,y);
//     return std::tuple<int,int>(x,y);
//     }

//     static double calculateDistance(std::tuple<int, int>pos1, std::tuple<int,int>pos2){
//      int x1 = std::get<0>(pos1);
//     int y1 = std::get<1>(pos1);
//     int x2 = std::get<0>(pos2);
//     int y2 = std::get<1>(pos2);

//     double dis_x = static_cast<double>(x2 - x1);
//     double dis_y = static_cast<double>(y2 - y1);

//     double distance = std::sqrt(dis_x * dis_x + dis_y * dis_y);

//     return distance;
//     }
//     };

// #endif