
#include<iostream>
#include <string>
#include "StockItem.h"

StockItem :: StockItem (){ 
barcode=0;
item_name="";
}

StockItem:: StockItem(int code_num, std::string description){
    barcode=code_num;
    item_name=description;
};
 std::string StockItem:: get_description(){return item_name;};   
int StockItem:: get_item_code() {return barcode;} ;     
StockItem :: ~StockItem(){            
}



