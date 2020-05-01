/*
 * AppleStore.cpp
 *
 *  Created on: Feb 27, 2020
 *      Author: keihouzz
 */

#include "AppleStore.h"
#include "AppleEmployee.h"
#include "IPhone.h"
#include "Person.h"

namespace edu {
namespace neu {
namespace csye6205 {

AppleStore::AppleStore() {
	// TODO Auto-generated constructor stub

}

AppleStore::~AppleStore() {
	// TODO Auto-generated destructor stub
}

void AppleStore::addItem(Item *pItem){
	this->iPhonePtrs.push_back(pItem);
}
void AppleStore::addEmployee(Employee *p){
	this->appleEmployPtrs.push_back(p);
}


void AppleStore::sortEmployees(){
	std::sort(std::begin(appleEmployPtrs), std::end(appleEmployPtrs),Employee::sortByLastName);
}

void AppleStore::sortInventory(){
	std::sort(std::begin(iPhonePtrs), std::end(iPhonePtrs),Item::sortByPrice);
}

std::ostream& operator<<(std::ostream& out, const Employee* pEmploy){
	std::cout<<pEmploy->getEmployeeId()<<","<<pEmploy->getAge()<<","<<pEmploy->getFirstName()<<","<<pEmploy->getLastName()<<","<<pEmploy->getWage()<<std::endl;
	return out;
}

std::ostream& operator<<(std::ostream& out, const Item* pItem){
	std::cout<<pItem->getId()<<","<<pItem->getPrice()<<","<<pItem->getName()<<","<<pItem->getState()<<std::endl;
	return out;
}

void AppleStore::showEmployees(){
	for(auto p: this->appleEmployPtrs){
		std::cout<<"Employee"<<p<<std::endl;
	}
}
//
void AppleStore::showInventory(){
	for(auto pItem : this->iPhonePtrs){
		std::cout<<"IPhone"<<pItem<<std::endl;
	}
}

void AppleStore::demo() {
    std::cout << "\n\t AppleStore::demo()..." << std::endl;

    AppleStore obj;

    /*
     * create and add Apple Store employees to Apple store
     * using the following CSV data
     * using the following CSV data in the following format:
     *
     * "employeeId,age,firstName,lastName,wage"
     *
     *     "1,17,Dan,Peters,63.45"
     *     "2,47,Joe,Gallo,83.45"
     *     "3,27,Ann,Gable,23.45"
     */
    obj.addEmployee(new AppleEmployee(1, 17, "Dan", "Peter", 63.45));
    obj.addEmployee(new AppleEmployee(2, 47, "Joe", "Gallo", 83.45));
    obj.addEmployee(new AppleEmployee(3, 27, "Ann", "Gable", 23.45));

    std::cout<<"appleEmployPtrs size " << obj.appleEmployPtrs.size() << std::endl;
    obj.showEmployees();
    // show all Apple Store employees

//    std::cout << std::endl;

    std::cout << "SORT Employees by LAST NAME:" << std::endl;
    obj.sortEmployees();
	obj.showEmployees();
    std::cout << std::endl;

    /*
     * create and add Apple Store products to Apple store
     * using the following CSV data in the following format:
     *
     * "id,itemPrice,itemName,mobileCarrier"
     *
     *     "1,999.99,IPhone X Max,Verizon"
     *     "2,899.99,IPhone X,Verizon"
     *     "3,849.99,IPhone X R,Verizon"
     */
    obj.addItem(new Item(1,999.99,"IPhone X Max","Verizon"));
    obj.addItem(new Item(2,899.99,"IPhone X","Verizon"));
    obj.addItem(new Item(3,849.99,"IPhone X R","Verizon"));
    //Item * itemPtrTest = new Item(3,849.99,"IPhone X R","Verizon");


    obj.showInventory();


    obj.sortInventory();
    std::cout << "SORT Inventory by PRICE:" << std::endl;
    obj.showInventory();
    std::cout << std::endl;


    std::cout << "\n\t AppleStore::demo()..." << std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
