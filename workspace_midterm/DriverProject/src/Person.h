/*
 * Person.h
 *
 *  Created on: Feb 26, 2020
 *      Author: keihouzz
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

class Person {
public:
	Person();
	Person(int _employeeId, int _age, std::string _firstName, std::string _lastName, double _wage);
	virtual ~Person();
	virtual int getAge() const = 0;
	virtual	void setAge(int age) = 0;
	virtual	int getEmployeeId() const = 0;
	virtual	void setEmployeeId(int employeeId) = 0;
	virtual	const std::string& getFirstName() const = 0;
	virtual	void setFirstName(const std::string &firstName) = 0;
	virtual	const std::string& getLastName() const = 0;
	virtual	void setLastName(const std::string &lastName) = 0;
	virtual	double getWage() const = 0;
	virtual	void setWage(double wage) = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* PERSON_H_ */
