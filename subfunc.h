#ifndef SUBFUNC_H
#define SUBFUNC_H

struct OrthCoordinates
{
    double x;
    double y;
};

struct PolCoordinates
{
    double r;
    double phi;
};

void enterOrth(OrthCoordinates *point);
void enterPol(PolCoordinates *point);
void showOrth(OrthCoordinates point);
void showPol(PolCoordinates point);

OrthCoordinates orth2Pol(OrthCoordinates point);
OrthCoordinates pol2Orth(PolCoordinates point);

OrthCoordinates sum(OrthCoordinates a,OrthCoordinates b);
OrthCoordinates subtraction(OrthCoordinates a,OrthCoordinates b);

#endif // SUBFUNC_H

