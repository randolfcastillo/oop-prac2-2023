#include <iostream>
#include <string>
#include "StockItem.h"
int main(){
StockItem test;
int code=3;
StockItem chair(code,"chair");

std :: cout << "The item is a: "<<test.get_description()<<" and the barcode is: " << test.get_item_code() << std :: endl;
std :: cout << "The item is a: "<<chair.get_description()<<" and the barcode is: " << chair.get_item_code() << std :: endl;

return 0;
}






