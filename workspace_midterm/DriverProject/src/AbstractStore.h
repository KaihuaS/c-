/*
 * AbstractStore.h
 *
 *  Created on: Feb 28, 2018
 *      Author: danielgmp
 */

#ifndef ABSTRACTSTORE_H_
#define ABSTRACTSTORE_H_

#include "Employee.h"
#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractStore {
public:
	AbstractStore();
	virtual ~AbstractStore();
	virtual void addItem(Item *pItem) = 0;
	virtual void addEmployee(Employee *p) = 0;
	virtual void sortEmployees() = 0;
	virtual void showEmployees() = 0;
	virtual void sortInventory() = 0;
	virtual void showInventory() = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTSTORE_H_ */
