/*
 * DATA STRUCTURES LINE EDITOR // STEPHEN FETINKO 2018
 */

#include "stdafx.h"
#include "LinkedList.h"


LinkedList::LinkedList() : first(nullptr) {
	// Constructor
}


LinkedList::~LinkedList() {
	// Destructor
	Node *node = first;
	while (node != nullptr) {
		Node *temp = node;
		node = node->next;
		delete temp;
	}
}

void LinkedList::add(std::string line) {
	Node *node = new Node();
	node->data = line;
	if (first == nullptr) {
		first = node;
	} else {
		Node *currentNode = first;
		Node *previousNode = nullptr;
		while (currentNode != nullptr) {
			previousNode = currentNode;
			currentNode = currentNode->next;
		}
		if (previousNode != nullptr)
			previousNode;
	}
}

void LinkedList::deleteValue(std::string lineValue) {
	Node *node = first;
	Node *prev = nullptr;
	while (node != nullptr) {
		if (node->data == value)
			break;
		prev = node;
		node = node->next;
	}
	if (node != nullptr) {
		if (node == first) {
			first = node->next;
		} else {
			prev->next = node->next;
		}
		delete node;
	}
}

void LinkedList::deleteNode(std::string lineNode) {
	int index = -1;
	Node *node = first;
	Node *prev = nullptr;
	while (node != nullptr) {
		index++;
		if (index == lineNode)
			break;
		prev = node;
		node = node->next;
	}
	if (index >= 0) {
		if (node == first) {
			first = node->next;
		} else {
			prev->next = node->next;
		}
		delete node;
	}
}

void LinkedList::insertAfterValue(int value, int num) {
	Node *node = new Node();
	node->data = num;
	// Search for node to insert after
	Node *prev = first;
	while (prev != nullptr) {
		if (prev->data == value)
			break;
		prev = prev->next;
	}
	// Insert node into list
	if (first == nullptr) {
		first = node;
	} else {
		if (prev != nullptr) {
			node->next = prev->next;
			prev->next = node;
		} else {
			// Default to add if no node was found
			add(num);
		}
	}
}

void LinkedList::insertBeforeNode(int nodeNum, int num) {
	int index = -1;
	Node *newNode = new Node();
	newNode->data = num;
	Node *node = first;
	Node *prev = first;
	while (node != nullptr) {
		index++;
		if (index == nodeNum)
			break;
		prev = node;
		node = node->next;
	}
	// Insert node into list
	if (first == nullptr) {
		first = newNode
	} else {
		if (node != nullptr) {
			prev->next = newNode;
			newNode->next = node;
		} else {
			// If we can't find a node to insert after default to add
			add(num);
		}
	}
}