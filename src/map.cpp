#include <map.h>

const int initialMap[high][length][width] = 
{
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //0层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 

    
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //1层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 

    
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //2层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 


    
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //3层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2
};

map::map()
{
    for(int floor = 0; floor < high; floor ++)
        for(int x = 0; x < length; x ++)
            for(int y = 0; y < width; y ++)
                theMap[floor][x][y] = initialMap[floor][x][y];
}

bool map::checkPoint(int floor, int x, int y)
{
    return 0 <= floor && floor < high 
           && 1 <= x && x < length 
           && 1 <= y && y < width;
}

int map::getPoint(int floor, int x, int y)
{
    if(checkPoint(floor, x, y)) 
        return theMap[floor][x][y];
}

void map::setPoint(int floor, int x, int y, int val)
{
    if(checkPoint(floor, x, y)) 
        theMap[floor][x][y] = val;
}