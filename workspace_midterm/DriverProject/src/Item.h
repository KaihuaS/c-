/*
 * Item.h
 *
 *  Created on: Feb 26, 2020
 *      Author: keihouzz
 */

#ifndef ITEM_H_
#define ITEM_H_
#include <iostream>
#include <vector>
#include "AbstractItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

class Item : public AbstractItem{
private:
	std::vector<Item*> itemPtrs;
	int id;
	double price;
	std::string name;
	std::string state;
public:
	Item();
	Item(int _id, double _price, std::string _name, std::string _state);
	virtual ~Item();
	virtual int getId() const override;
	virtual void setId(int id) override;
	virtual const std::string& getName() const override;
	virtual void setName(const std::string& name) override;
	virtual double getPrice() const override;
	virtual void setPrice(double price) override;
	virtual const std::string& getState() const override;
	virtual void setState(const std::string &state) override;
	static bool sortByPrice(Item *p1, Item *p2);



};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ITEM_H_ */
