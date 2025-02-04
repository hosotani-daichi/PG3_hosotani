#include "Stationery.h"
#pragma once

class Pencil :public Stationery
{
public:
    void sound() const override {
        printf("文字を書くもの\n");
    }
};

