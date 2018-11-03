#pragma once

#include "ShootType.h"
#include <ostream>

class Shoot
{
public:
	Shoot(ShootType type);
	~Shoot();

	ShootType Type;

	bool operator>(const Shoot& shoot);
	bool operator<(const Shoot& shoot);
	bool operator==(const Shoot& shoot);
	friend std::ostream& operator<<(std::ostream& output, const Shoot& type);
};