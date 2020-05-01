/*
 * Store.cpp
 *
 *  Created on: Feb 27, 2020
 *      Author: keihouzz
 */

#include "Store.h"

namespace edu {
namespace neu {
namespace csye6205 {

Store::Store() {
	// TODO Auto-generated constructor stub

}

Store::~Store() {
	// TODO Auto-generated destructor stub
}

//virtual void addItem(Item item) = 0;
	void Store::addItem(Item *pItem){
		this->iPhonePtrs.push_back(pItem);
	}
	//virtual void addEmployee(Employee e) = 0;
	void Store::addEmployee(Employee *p){
		this->appleEmployPtrs.push_back(p);
	}
	void Store::sortEmployees(){
		sort(appleEmployPtrs.begin(), appleEmployPtrs.end() );
	}
	void Store::showEmployees(){
		for(auto p: this->appleEmployPtrs){
			std::cout<<"Employee"<<p<<std::endl;
		}
	}


	void Store::sortInventory(){
		sort(iPhonePtrs.begin(), iPhonePtrs.end());
	}
	void Store::showInventory(){
		for(auto pItem : this->iPhonePtrs){
			std::cout<< pItem <<std::endl;
		}
	}





} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
