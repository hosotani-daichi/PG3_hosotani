#include "Stationery.h"
#pragma once

class Pencil :public Stationery
{
public:

	Pencil();
	~Pencil();
	void StationeryStore() override;

private:

	const char* name = "えんぴつ";
	const char* role = "文字を書くもの";
};

