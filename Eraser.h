#pragma once
#include"Pencil.h"

class Eraser:public Pencil
{
public:
	Eraser();
	~Eraser();
	void Attack() override;

	private:
};

