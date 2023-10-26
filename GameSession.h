#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
class GameSession{
public:
std::vector<GridUnit*> grid;
private:
GameSession(){

}
std::vector<GridUnit*>& getGrid(){

}
void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){

};

void gameCycle(int maxCycles, double obstacleActivationDistance){

}



};

#endif