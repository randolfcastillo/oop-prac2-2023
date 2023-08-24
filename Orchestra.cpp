#include "Musician.h"
#include "Orchestra.h"

Orchestra :: Orchestra (){
    size1=0;
    current_members=0;
    list1=new Musician[size1];
}

Orchestra :: Orchestra(int size2){
    size1=size2;
    list1=new Musician[size1];
    current_members=0;
}

int Orchestra :: get_current_number_of_members(){
    return current_members;};

bool Orchestra :: add_musician(Musician new_musician){
    if (current_members<size1){
        list1[current_members] = new_musician;
        current_members++;
        return true;
    }
    else{
        return false;
    }
}

bool Orchestra ::  has_instrument(std::string instrument){ 
for (int i=0; i<size1;i++){
    if(instrument==list1[i].get_instrument()){
        return true;
    }
}
return false;
}
Musician* Orchestra :: get_members(){return list1;};

Orchestra :: ~Orchestra(){ delete[] list1;}

