#ifndef HELPER_H
#define HELPER_H
#include <tuple>
#include <random>
#include "GridUnit.h"
#include "Modifier.h"
class Helper{
    private:
    public:
   static std::tuple<int,int> generateRandomCoordinates(int gridWidth, int gridHeight){
       int x=rand() % gridWidth;
       int y= rand() % gridHeight;
       std::tuple<int,int> randCoordinates=std::make_tuple(x,y);
       return randCoordinates;
    }

static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
      int x1 = std::get<0>(coords1);
    int y1 = std::get<1>(coords1);
    int x2 = std::get<0>(coords2);
    int y2 = std::get<1>(coords2);

    double dis_x = static_cast<double>(x2 - x1);
    double dis_y = static_cast<double>(y2 - y1);

    double distance = std::sqrt(dis_x * dis_x + dis_y * dis_y);

    return distance;
}

};

#endif