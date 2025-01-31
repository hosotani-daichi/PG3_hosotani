#pragma once
#include "Stationery.h"

class Eraser :public Stationery
{
public:

	Eraser();
	~Eraser();
	void StationeryStore() override;

private:

	const char* name = "消しゴム";
	const char* role = "書いた文字を消すもの";
};

