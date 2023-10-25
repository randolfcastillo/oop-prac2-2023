#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include <cstdlib>
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"

class Game{
    private:
    std::vector<GameEntity*> entities;
    public:
    //Getter
 std::vector<GameEntity*>& get_entities() {
        return entities;
    }

    // Setter for entities
    void set_entities(const std::vector<GameEntity*>& entities) {
        this->entities=entities;
    }
std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
     std::vector<GameEntity*> newEntities;

        // Create Ship objects with random positions
       for (int i = 0; i < numShips; ++i) {
        std::tuple<int, int> randomPos = Utils::generateRandomPos(gridWidth, gridHeight);
        Ship* ship = new Ship(std::get<0>(randomPos), std::get<1>(randomPos));
        newEntities.push_back(ship);
    }

    for (int i = 0; i < numMines; ++i) {
        std::tuple<int, int> randomPos = Utils::generateRandomPos(gridWidth, gridHeight);
        Mine* mine = new Mine(std::get<0>(randomPos), std::get<1>(randomPos));
        newEntities.push_back(mine);
    }

    entities = newEntities;
    return newEntities;
    
    }
    
void gameLoop(int maxIterations, double mineDistanceThreshold){
    for (int iteration = 0; iteration < maxIterations; ++iteration) {
  // Move all Ship objects in entities
        for (GameEntity* entity : entities) {
            Ship* ship = dynamic_cast<Ship*>(entity);
            if (ship != nullptr) {
                ship->move(1, 0);
            }
        }
   for (GameEntity* entity : entities) {
            Ship* ship = dynamic_cast<Ship*>(entity);
            if (ship != nullptr) {
                for (GameEntity* mineEntity : entities) {
                    Mine* mine = dynamic_cast<Mine*>(mineEntity);
                    if (mine != nullptr) {
                        std::tuple<int, int> shipPos = ship->getPos();
                        std::tuple<int, int> minePos = mine->getPos();
                        double distance = Utils::calculateDistance(shipPos, minePos);
                        if (distance <= mineDistanceThreshold) {
                            mine->explode();
                        }
                    }
                }
            }
        }
        bool allShipsDestroyed = true;
        for (GameEntity* entity : entities) {
            Ship* ship = dynamic_cast<Ship*>(entity);
            if (ship != nullptr) {
                allShipsDestroyed = false;
                break;
            }
        }
        if (allShipsDestroyed) {
            std::cout << "Game over! All ships destroyed." << std::endl;
            return;  // Terminate the game loop
        }
    }
}
};



#endif