#include <iostream>
#include "Store.h"

int main(){

Store Retail(2);

StockItem Hammer(1,"Hammer");
StockItem Widget(2,"Widget");
StockItem Chair;(3,"Chair");

std::cout << "The amount of items is: " << Retail.get_Total_Stock_Count()<< std:: endl;


}