#include <iostream>
#include "Store.h"

Store :: Store(){
    capacity_max=0;
    stock=0;
    items=new StockItem[stock];
}

Store :: Store(int capacity){
capacity_max=capacity;
items=new StockItem[capacity_max];
stock=0;
}

int Store :: get_Total_Stock_Count(){
    return stock;
}


int Store ::  get_Stock_Count(int item_code){
    return stock;
}

StockItem* Store:: get_Stock_List(){
return items;
}

bool Store :: add_Stock(StockItem new_stock){
if (stock<capacity_max){
    items[stock]=new_stock;
    stock++;
   return true; 
}
else{
return false;

}
}

Store :: ~Store(){delete[]items;}