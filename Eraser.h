#pragma once
#include "Stationery.h"

class Eraser :public Stationery
{
public:
    void sound() const override {
        printf("文字を消すもの\n");
    }
};

