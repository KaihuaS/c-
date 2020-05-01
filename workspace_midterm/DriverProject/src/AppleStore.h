/*
 * AppleStore.h
 *
 *  Created on: Feb 27, 2020
 *      Author: keihouzz
 */

#ifndef APPLESTORE_H_
#define APPLESTORE_H_
#include <iostream>
#include <vector>
#include "Store.h"
#include "Item.h"
#include "AbstractItem.h"
#include "Person.h"

namespace edu {
namespace neu {
namespace csye6205 {

class AppleStore : public Store{
private:
	std::vector<Employee*> appleEmployPtrs;
	std::vector<Item*> iPhonePtrs;

public:
	AppleStore();
	virtual ~AppleStore();
	static void demo();
	void addItem(Item *pItem) override;
	void addEmployee(Employee *p) override;
	void sortEmployees() override;
	void showEmployees()override;
	void sortInventory() override;
	void showInventory() override;
	friend std::ostream& operator<<(std::ostream& out, const Employee* pEmploy);
	friend std::ostream& operator<<(std::ostream& out, const Item* pItem);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* APPLESTORE_H_ */
