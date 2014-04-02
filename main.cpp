//Перевод координат точки из декартовой с/к в полярную и наоборот
//Операции сложения и вычитания

#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include "subfunc.h"

using namespace std;

void menu()
{
    char res[2];
    res[0] = 'y';
    while(res[0] == 'y')
    {
        char respond[256];
        char respond1[256];
        char respond2[256];
        char respond3[256];
        printf("What to do?\n 1: transform into orthogonal coordinates\n 2: transform into polar coordinates\n Operations with polar coordinates:\n 3: sum up\n 4: subtract\n Operations with orthogonal coordinates:\n 5: sum up\n 6: subtract\n");
        scanf("%s", &respond);

        if(!strcmp(respond, "1"))
        {
            PolCoordinates *point;
            point=new PolCoordinates;
            cout<<"Enter the point r.phi"<<endl;
            enterPol(point);
            pol2Orth(point);
            showOrth(point);
            delete[] point;
            point=0;
        }
        if(!strcmp(respond, "2"))
        {
            OrthCoordinates *point;
            point=new OrthCoordinates;
            cout<<"Enter the point x.y"<<endl;
            enterOrth(point);
            orth2Pol(point);
            showPol(point);
            delete[] point;
            point=0;
        }
        if(!strcmp(respond, "3"))
        {
            PolCoordinates *a;
            PolCoordinates *b;
            cout<<"Enter the first point"<<endl;
            enterPol(a);
            pol2Orth(a);
            cout<<"Enter the second point"<<endl;
            enterPol(b);
            pol2Orth(b);
            cout<<"Sum = ",showPol(orth2Pol(sum(*a,*b)))<<endl;
            delete[] a;
            a=0;
            delete[] b;
            b=0;
        }
        if(!strcmp(respond, "4"))
        {
            PolCoordinates a;
            PolCoordinates b;
            cout<<"Enter the first point"<<endl;
            enterPol(a);
            pol2Orth(a);
            cout<<"Enter the second point"<<endl;
            enterPol(b);
            pol2Orth(b);
            cout<<"Subtraction = ",showPol(orth2Pol(subtraction(*a,*b)))<<endl;
            delete[] a;
            a=0;
            delete[] b;
            b=0;
        }
        if(!strcmp(respond, "5"))
        {
            OrthCoordinates *a;
            OrthCoordinates *b;
            cout<<"Enter the first point"<<endl;
            enterOrth(a);
            cout<<"Enter the second point"<<endl;
            enterOrth(b);
            cout<<"Sum = ",showOrth(sum(*a,*b))<<endl;
            delete[] a;
            a=0;
            delete[] b;
            b=0;
        }
        if(!strcmp(respond, "6"))
        {
            OrthCoordinates *a;
            OrthCoordinates *b;
            cout<<"Enter the first point"<<endl;
            enterOrth(a);
            cout<<"Enter the second point"<<endl;
            enterOrth(b);
            cout<<"Subtraction = ",showOrth(subtraction(*a,*b))<<endl;
            delete[] a;
            a=0;
            delete[] b;
            b=0;
        }

        printf("More menu? (y/n)\n", respond);
        scanf("%s", &res);
    }
}

int main()
{
    menu();
    return 0;
}
