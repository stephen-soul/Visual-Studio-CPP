#pragma once
#include <stdlib.h>
#include "stdafx.h"
#include "stdio.h"
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
class MenuOptions {
public:
	// Constructor
	MenuOptions();
	
	// Functions
	void runIntro();
	void runMainMenu();
	void getSystemTime();

	// Variables
	string usersName;
};

