#include<stdio.h>
#include"Pencil.h"
#include"Eraser.h"
#include "Stationery.h"

Pencil* pencil[3];
Eraser* stationery;

int main() {
	Stationery* stationery[3];

	for (int i = 0; i < 2; i++) {
		if (i < 1)
			stationery[i] = new Pencil;
		else
			stationery[i] = new Eraser;
	}

	for (int i = 0; i < 2; i++) {
		stationery[i]->Attack();
	}

	for (int i = 0; i < 2; i++) {
		delete stationery[i];
	}
	return 0;
}