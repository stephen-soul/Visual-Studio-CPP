#pragma once
#include <stdlib.h>
#include "stdafx.h"
#include "stdio.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class MainMenu {
public:
	// Constructor
	MainMenu();
	
	// Functions
	void runIntro();
	void runMainMenu();
	void getSystemTime();

	// Variables
	string usersName;
	bool gettingMenuInput;
	string menuInput;
	string finalizedMenuInput[3];
};

