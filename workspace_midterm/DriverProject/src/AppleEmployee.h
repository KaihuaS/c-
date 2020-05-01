/*
 * AppleEmployee.h
 *
 *  Created on: Feb 26, 2020
 *      Author: keihouzz
 */

#ifndef APPLEEMPLOYEE_H_
#define APPLEEMPLOYEE_H_
#include <iostream>
#include "Employee.h"

namespace edu {
namespace neu {
namespace csye6205 {

class AppleEmployee : public Employee{
private:
	int employeeId;
	int age;
	std::string firstName;
	std::string lastName;
	double wage;
public:
	AppleEmployee();
	AppleEmployee(int _employeeId, int _age, std::string _firstName, std::string _lastName, double _wage);
	virtual ~AppleEmployee();

	virtual int getAge() const override;
	virtual	void setAge(int age) override;
	virtual	int getEmployeeId() const override;
	virtual	void setEmployeeId(int employeeId) override;
	virtual	const std::string& getFirstName() const override;
	virtual	void setFirstName(const std::string &firstName) override;
	virtual	const std::string& getLastName() const override;
	virtual	void setLastName(const std::string &lastName) override;
	virtual	double getWage() const override;
	virtual	void setWage(double wage) override;

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* APPLEEMPLOYEE_H_ */
