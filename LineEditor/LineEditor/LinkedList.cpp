/*
 * THIS FILE HANDLES THE TXT FILES AND THE LINKED LISTS
 */

#include "stdafx.h"
#include "LinkedList.h"

/*
 * This will use an ifstream to try and open a file. If it can't, return false
 */
bool LinkedList::tryToFindFile(std::string fileName, std::string newFileName) {
	std::ifstream file(fileName);
	if (!file.is_open())
		return false;
	else
		return true;
}
/*
 * This will try to open a file (passed from the tryToFindFile) into a linked list
 */
void LinkedList::openFileIntoList(std::string fileName, std::string newFileName) {
	// Open file into a linked list
}
