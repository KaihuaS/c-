/*
 * Employee.cpp
 *
 *  Created on: Feb 26, 2020
 *      Author: keihouzz
 */

#include "Employee.h"

namespace edu {
namespace neu {
namespace csye6205 {

Employee::Employee() {
	// TODO Auto-generated constructor stub

}
Employee::Employee(int _employeeId, int _age, std::string _firstName, std::string _lastName, double _wage):employeeId(_employeeId),
		age(_age), firstName(_firstName), lastName(_lastName), wage(_wage){

}

int Employee::getAge() const {
	return age;
}

void Employee::setAge(int age) {
	this->age = age;
}

int Employee::getEmployeeId() const {
	return employeeId;
}

void Employee::setEmployeeId(int employeeId) {
	this->employeeId = employeeId;
}

const std::string& Employee::getFirstName() const {
	return firstName;
}

void Employee::setFirstName(const std::string &firstName) {
	this->firstName = firstName;
}

const std::string& Employee::getLastName() const {
	return lastName;
}

void Employee::setLastName(const std::string &lastName) {
	this->lastName = lastName;
}

double Employee::getWage() const {
	return wage;
}

void Employee::setWage(double wage) {
	this->wage = wage;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

bool Employee::sortByLastName(Employee *p1, Employee *p2){
	return p2->getLastName().compare(p1->getLastName());
}



} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
