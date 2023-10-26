#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
class GameSession{
private:
std::vector<GridUnit*> grid;
public:
GameSession(){

}
std::vector<GridUnit*>& getGrid(){
return grid;
}
void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){

};

void gameCycle(int maxCycles, double obstacleActivationDistance){

}



};

#endif