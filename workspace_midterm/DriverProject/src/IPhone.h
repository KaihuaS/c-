/*
 * IPhone.h
 *
 *  Created on: Feb 27, 2020
 *      Author: keihouzz
 */

#ifndef IPHONE_H_
#define IPHONE_H_
#include <iostream>
#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

class IPhone : public Item{
private:
	int id;
	double price;
	std::string name;
	std::string mobileCarrier;

public:
	IPhone();
	IPhone(int _id, double _price, std::string _name, std::string _mobileCarrier);
	virtual ~IPhone();
	int getId() const;
	void setId(int id);
	const std::string& getMobileCarrier() const;
	void setMobileCarrier(const std::string &mobileCarrier);
	const std::string& getName() const;
	void setName(const std::string &name);
	double getPrice() const;
	void setPrice(double price);
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IPHONE_H_ */
