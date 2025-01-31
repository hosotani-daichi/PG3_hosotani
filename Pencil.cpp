#include "Pencil.h"
#include<stdio.h>

Pencil::Pencil()
{
	printf("%s\n", name);
}

Pencil::~Pencil()
{
	printf("%s\n", name);
}

void Pencil::StationeryStore()
{
	printf("%sは%s\n", name, role);
}

