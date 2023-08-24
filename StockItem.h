#ifndef STOCKITEM_H
#define STOCKITEM_H
#include <string>
class StockItem{
private: 
int barcode; 
std :: string item_name;
public:
//int barcode2; 
StockItem();                  
StockItem(int code_num, std::string description);      
std::string get_description();    // returns the item description
int get_item_code();       // returns the item code of the item
~StockItem();               //A default destructor
};
#endif
