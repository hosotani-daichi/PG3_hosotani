#pragma once

class Stationery {
public:

	Stationery();
	virtual ~Stationery();
	virtual void StationeryStore();

private:

	const char* name;
};