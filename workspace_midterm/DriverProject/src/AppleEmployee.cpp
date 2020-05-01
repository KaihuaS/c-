/*
 * AppleEmployee.cpp
 *
 *  Created on: Feb 26, 2020
 *      Author: keihouzz
 */

#include "AppleEmployee.h"

namespace edu {
namespace neu {
namespace csye6205 {

AppleEmployee::AppleEmployee() {
	// TODO Auto-generated constructor stub

}

AppleEmployee::AppleEmployee(int _employeeId, int _age, std::string _firstName, std::string _lastName, double _wage):employeeId(_employeeId),
		age(_age), firstName(_firstName), lastName(_lastName), wage(_wage){

}

int AppleEmployee::getAge() const {
	return age;
}

void AppleEmployee::setAge(int age) {
	this->age = age;
}

int AppleEmployee::getEmployeeId() const {
	return employeeId;
}

void AppleEmployee::setEmployeeId(int employeeId) {
	this->employeeId = employeeId;
}

const std::string& AppleEmployee::getFirstName() const {
	return firstName;
}

void AppleEmployee::setFirstName(const std::string &firstName) {
	this->firstName = firstName;
}

const std::string& AppleEmployee::getLastName() const {
	return lastName;
}

void AppleEmployee::setLastName(const std::string &lastName) {
	this->lastName = lastName;
}

double AppleEmployee::getWage() const {
	return wage;
}

void AppleEmployee::setWage(double wage) {
	this->wage = wage;
}

AppleEmployee::~AppleEmployee() {
	// TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
