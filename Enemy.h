#pragma once
#include <stdio.h>
typedef void(*PFunc)();

enum class Phase {
	Move,
	Fire,
	Secession
};

/// <summary>
/// 敵
/// </summary>

class Enemy {
public:
	void Move();
	void Fire();
	void Secession();
	void Update();
private:
	Phase phase_ = Phase::Move;

	//メンバ関数ポインタ
	static void (Enemy::* enemy[])();
};