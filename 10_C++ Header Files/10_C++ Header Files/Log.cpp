#include "Log.h"
#include <iostream>

void IntLog()
{
	Log("Initializing log.....");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}