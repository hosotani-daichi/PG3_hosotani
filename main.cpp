#include<stdio.h>
#include"Pencil.h"
#include"Eraser.h"
#include "Stationery.h"

int main() {
    Stationery* Stationery1 = new Pencil();
    Stationery* Stationery2 = new Eraser();

    Stationery1->sound();
    Stationery2->sound();

    delete Stationery1;
    delete Stationery2;

    return 0;
}