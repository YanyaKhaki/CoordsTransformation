#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "subfunc.h"

using namespace std;

void enterOrth(OrthCoordinates *point) //ввод в декартовой
{
    cin>>point->x>>point->y;
}

void enterPol(PolCoordinates *point) //ввод в полярной
{
    cin>>point->r>>point->phi;
}

void showOrth(OrthCoordinates point) //вывод в декартовой
{
    cout<<"("<<point.x<<"."<<point.y<<")"<<endl;
}

void showPol(PolCoordinates point) //вывод в полярной
{
    cout<<"("<<point.r<<"."<<point.phi<<")"<<endl;
}

PolCoordinates orth2Pol(OrthCoordinates point) //из декартовой в полярную
{
    PolCoordinates result;
    result.r=sqrt(pow(point.x,2)+pow(point.y,2));
    result.phi=atan(point.y/point.x);
    return result;
}

OrthCoordinates pol2Orth(PolCoordinates point) //из полярной в декартовую
{
    OrthCoordinates result;
    result.x=point.r*cos(point.phi);
    result.y=point.r*sin(point.phi);
    return result;
}

OrthCoordinates sum(OrthCoordinates a,OrthCoordinates b) //сложение
{
    OrthCoordinates result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;
}

OrthCoordinates subtraction(OrthCoordinates a,OrthCoordinates b) //вычитание
{
    OrthCoordinates result;
    result.x=a.x-b.x;
    result.y=a.y-b.y;
    return result;
}
