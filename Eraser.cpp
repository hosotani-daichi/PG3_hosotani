#include "Eraser.h"
#include<stdio.h>

Eraser::Eraser()
{
	printf("%s\n", name);
}

Eraser::~Eraser()
{
	printf("%s\n", name);
}

void Eraser::StationeryStore()
{
	printf("%sは%s\n", name,role);
}

