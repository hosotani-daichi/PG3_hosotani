#include<stdio.h>
#include"Pencil.h"
#include"Eraser.h"

int main() {
	Stationery* Stationery[3];


	for (int i = 0; i < 3; i++) {
		if (i < 1) {
			Stationery[i] = new Pencil;
		}
		else {
			Stationery[i] = new Eraser;
		}
	}

	for (int i = 0; i < 3; i++) {
		Stationery[i]->StationeryStore();
	}

	for (int i = 0; i < 3; i++) {
		delete Stationery[i];
	}

	return 0;
}