#include "pch.h"
#include "AI.h"
#include <stdlib.h>

Shoot GenerateShoot()
{
	ShootType type = RollShootType();
	return Shoot(type);
}

ShootType RollShootType()
{
	return static_cast<ShootType>(rand() % 3);
}