#include "pch.h"
#include "Shoot.h"
#include "ShootType.h"
#include <string>

Shoot::Shoot(ShootType type) : Type(type)
{
}

Shoot::~Shoot() = default;

bool Shoot::operator<(const Shoot& shoot)
{
	switch (Type)
	{
		case ShootType::Rock:
			return shoot.Type == ShootType::Paper ? true : false;
		case ShootType::Paper:
			return shoot.Type == ShootType::Scissors ? true : false;
		case ShootType::Scissors:
			return shoot.Type == ShootType::Rock ? true : false;
		default: return false;
	}
}

bool Shoot::operator>(const Shoot& shoot)
{
	switch (Type)
	{
		case ShootType::Rock:
			return shoot.Type == ShootType::Scissors ? true : false;
		case ShootType::Paper:
			return shoot.Type == ShootType::Rock ? true : false;
		case ShootType::Scissors:
			return shoot.Type == ShootType::Paper ? true : false;
		default: return false;
	}
}

bool Shoot::operator==(const Shoot& shoot)
{
	switch (Type)
	{
		case ShootType::Rock:
			return shoot.Type == ShootType::Rock? true : false;
		case ShootType::Paper:
			return shoot.Type == ShootType::Paper ? true : false;
		case ShootType::Scissors:
			return shoot.Type == ShootType::Scissors ? true : false;
		default: return false;
	}
}

std::ostream& operator<<(std::ostream& output, const Shoot& shoot)
{
	switch (shoot.Type)
	{
		case ShootType::Rock:
			output << "Rock";
			break;
		case ShootType::Paper:
			output << "Paper";
			break;
		case ShootType::Scissors:
			output << "Scissors";
			break;
		default:
			output << "Nothing.";
			break;
	}

	return output;
}