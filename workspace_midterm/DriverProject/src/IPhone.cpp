/*
 * IPhone.cpp
 *
 *  Created on: Feb 27, 2020
 *      Author: keihouzz
 */

#include "IPhone.h"

namespace edu {
namespace neu {
namespace csye6205 {

IPhone::IPhone() {
	// TODO Auto-generated constructor stub

}

IPhone::IPhone(int _id, double _price, std::string _name, std::string _mobileCarrier)
:id(_id),price(_price),name(_name), mobileCarrier(_mobileCarrier){

}

int IPhone::getId() const {
	return id;
}

void IPhone::setId(int id) {
	this->id = id;
}

const std::string& IPhone::getMobileCarrier() const {
	return mobileCarrier;
}

void IPhone::setMobileCarrier(const std::string &mobileCarrier) {
	this->mobileCarrier = mobileCarrier;
}

const std::string& IPhone::getName() const {
	return name;
}

void IPhone::setName(const std::string &name) {
	this->name = name;
}

double IPhone::getPrice() const {
	return price;
}

void IPhone::setPrice(double price) {
	this->price = price;
}

IPhone::~IPhone() {
	// TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
