#include "stdafx.h"
#include "Editor.h"

Editor::Editor() {
}

Editor::~Editor() {
}

void Editor::readFromFile(std::string fileName) {
	// Use an ifstream to try to open a file
	file.open("C:\\Users\\Stephen\\source\\repos\\Visual-Studio-CPP\\DataStructures_Assignment1\\DataStructures_Assignment1\\Debug\\" + fileName, true);
	if (file.fail()) {
		std::cout << "Could not open file. Please try again later." << std::endl << std::endl;
	} else {
		while (getline(file, line)) {
			linkedList.add(line);
		}
		file.close();
	}
}
