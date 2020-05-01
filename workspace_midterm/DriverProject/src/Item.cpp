/*
 * Item.cpp
 *
 *  Created on: Feb 26, 2020
 *      Author: keihouzz
 */

#include "Item.h"
#include <iostream>
#include <sstream>

namespace edu {
namespace neu {
namespace csye6205 {

Item::Item() {
	// TODO Auto-generated constructor stub

}

Item::Item(int _id, double _price, std::string _name, std::string _state)
:id(_id),price(_price),name(_name), state(_state){

}

int Item::getId() const {
	return id;
}

void Item::setId(int id) {
	this->id = id;
}

const std::string& Item::getState() const {
	return state;
}

void Item::setState(const std::string &state) {
	this->state = state;
}

const std::string& Item::getName() const {
	return name;
}

void Item::setName(const std::string &name) {
	this->name = name;
}

double Item::getPrice() const {
	return price;
}

void Item::setPrice(double price) {
	this->price = price;
}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

bool Item::sortByPrice(Item* p1, Item* p2){
	return p1->getPrice()< p2->getPrice();
}


} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

