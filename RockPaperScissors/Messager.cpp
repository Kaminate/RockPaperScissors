#include "pch.h"
#include "Messager.h"
#include "Shoot.h"
#include <iostream>
#include <string>

void PrintHeader()
{
	std::cout << "Rock Paper Scissors Bitch\n" << std::endl;
}

void PrintInstructions()
{
	std::cout << "[Rr][Pp][Ss], [Qq] to quit" << std::endl;
}

void PrintTyped(char input)
{
	std::cout << "You typed: " << input << std::endl;
}

void PrintInvalidInput()
{
	std::cout << "Invalid input you fuck, try again." << std::endl;
}

void PrintDraw()
{
	std::cout << "Sucks, that's a draw." << std::endl;
}

void PrintWin()
{
	std::cout << "You won? That's just dumb luck." << std::endl;
}

void PrintLose()
{
	std::cout << "Sucks to suck, noob." << std::endl;
}

void PrintAIChose(Shoot shoot)
{

	std::cout << "AI chose " << shoot << std::endl;
}

void PrintGoAgain()
{
	std::cout << "Give it another go, we'll see if your luck continues." << std::endl;
}