#ifndef CAR_H
#define CAR_H

class Car{
    protected:
    int price;
    int emissions=0;
    public:
    Car();
    Car(int price);
    virtual void drive(int kms);
    int get_price();
    void set_price(int price);
    int get_emissions();
    void set_emissions(int emissions);
};

#endif