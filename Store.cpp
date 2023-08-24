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
}

int Store :: get_Total_Stock_Count(){
for(int i=0;i<capacity_max< i++){
    if (stock<capacity_max){
        stock++;
    }
}

};

int get_Stock_Count(int item_code){
    
}

StockItem* Store:: get_Stock_List(){

}

bool Store :: add_Stock(StockItem new_stock){
for (int i=0;i<capacity_max<i++){
if (stock<capacity_max){
    
   return true; 
}
}
}