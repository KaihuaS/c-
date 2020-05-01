/*
 * Store.h
 *
 *  Created on: Feb 27, 2020
 *      Author: keihouzz
 */

#ifndef STORE_H_
#define STORE_H_
#include "AbstractStore.h"
#include "AbstractItem.h"
#include "Person.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Store : public AbstractStore {
private:
	std::vector<Employee*> appleEmployPtrs;
	std::vector<Item*> iPhonePtrs;
public:
	Store();
	virtual ~Store();
	//virtual void addItem(Item item) = 0;
	virtual void addItem(Item *pItem) override;
	//virtual void addEmployee(Employee e) = 0;
	virtual void addEmployee(Employee *p) override;
	virtual void sortEmployees() override;
	virtual void showEmployees() override;
	virtual void sortInventory() override;
	virtual void showInventory() override;
	friend std::ostream& operator<<(std::ostream& out, const Employee* pEmploy);
	friend std::ostream& operator<<(std::ostream& out, const Item* pItem);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STORE_H_ */
