#include "pch.h"
#include "Input.h"
#include "Shoot.h"
#include <iostream>

bool Validate(char input)
{
	switch (input)
	{
		case 'Q':
		case 'R':
		case 'P':
		case 'S':
		case 'q':
		case 'r':
		case 'p':
		case 's':
			return true;
		default:
			return false;
	}
}

Shoot ProcessInput(char input)
{
	switch (input)
	{
		case 'Q':
		case 'q': 
			exit(0);
			break;
		case 'R':
		case 'r':
			return Shoot(ShootType::Rock);
		case 'P':
		case 'p':
			return Shoot(ShootType::Paper);
		case 'S':
		case 's':
			return Shoot(ShootType::Scissors);
		default:
			break;
	}
}