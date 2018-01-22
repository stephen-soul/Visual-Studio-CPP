#pragma once
#include <stdlib.h>
#include "stdafx.h"
#include "stdio.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> 

using namespace std;
class MainMenu {
public:
	// Constructor
	MainMenu();
	
	// Functions
	void runIntro();
	void runMainMenu();
	void getSystemTime();
	void runHelpMenu();

	// Variables
	string usersName;
	bool gettingMenuInput;
	string menuInput;
	int stringstreamLoopVariable;
};

