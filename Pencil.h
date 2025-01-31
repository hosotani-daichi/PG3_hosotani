#pragma once
class Pencil
{
public:
	Pencil();
	virtual~Pencil();
	virtual void Attack();

protected:
	const char* name;
};

