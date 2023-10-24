#ifndef UTILS_H
#define UTILS_H
#include <random>
#include<tuple>
class Utils{
    private:
    std::tuple<int,int> randposition;
    public:
    std::tuple<int,int> generateRandomPos(int gridWidth, int gridHeight){
        int x= std::rand() % gridWidth;
        int y=std::rand()% gridHeight;
    randposition=std::make_tuple(x,y);
    return randposition;
    }
    double calculateDistance(std::tuple<int, int>pos1, std::tuple<int,int>pos2){
     int x1 = std::get<0>(pos1);
    int y1 = std::get<1>(pos1);
    int x2 = std::get<0>(pos2);
    int y2 = std::get<1>(pos2);

    double dis_x = static_cast<double>(x2 - x1);
    double dis_y = static_cast<double>(y2 - y1);

    // Euclidean distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double distance = std::sqrt(dis_x * dis_x + dis_y * dis_y);

    return distance;
    }
    };

#endif