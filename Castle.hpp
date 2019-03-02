#ifndef CASTLE_HPP_INCLUDED
#define CASTLE_HPP_INCLUDED
#include "Coords.hpp"
#include "GameRules.cpp"
#include <vector>
enum BuildingType
{
    //standard buildings
    HOUSE = 1, //population increment according to number stated in gameRules
    SHOP = 2, //income increment
    FARM = 3, //food increment
    TOWER = 4, //def_bonus increment


    //special buildings, can only be made once
    MARKET = 11, // income increase greatly, but can be made only if meets specified requirements
    STONE_WALL = 12, // DEF_bonus increase ...
    SWORDMAKER = 13, //enables production of swordsmen
    SPEARMAKER = 14, //enables production of spears
    STABLE = 15, //enables production of horsemen
    FETCHER = 16, //enables production of archers
    TAX_MANAGER = 17 //bonus income for every shop.

};
class Castle
{
private:
    //Army garnison[]
    int def_bonus;
    int food;
    int money;
    int currentLordID;
    int side;
    std::vector<BuildingType> buildings;//ID-s.
    int currentlyBuilding;
    int buildingProcess;
    int income;
    int population;
    Coords position;


public:
    Castle(int x,int y,int side);

    Castle();

    int getDefBonus();

    int getFood();

    int getMoney();

    int getCurrentLord();

    bool setCurrentLord(int newLord);

    int getSide();

    bool setSide();

    int getPopulation();

    bool increasePopulation(int change);

    int getIncome();

    bool setPosition(Coords newC);

    bool SetNewBuilding(BuildingType newB);

    bool addBuilding(BuildingType newB);

    bool updateParams(); //updates income, food and def_bonus

};


#endif // CASTLE_HPP_INCLUDED
