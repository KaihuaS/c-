/*
 * AbstractItem.h
 *
 *  Created on: Oct 29, 2019
 *      Author: dpeters
 */

#ifndef ABSTRACTITEM_H_
#define ABSTRACTITEM_H_

#include <iostream>		// std::cout, std::endl, std::ostream, std::istream
#include <vector>		// std::vector
#include <string>		// std::string

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractItem {
public:
	AbstractItem();
	virtual ~AbstractItem();

	virtual int getId() const = 0;
	virtual void setId(int id) = 0;
	virtual const std::string& getName() const = 0;
	virtual void setName(const std::string& name) = 0;
	virtual double getPrice() const = 0;
	virtual void setPrice(double price) = 0;

	virtual const std::string& getState() const = 0;
	virtual void setState(const std::string &state) = 0;
	/*
	 * Virtual methods which are potentially
	 * replaceable with derived class implementation
	 */


};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTITEM_H_ */
