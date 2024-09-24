#include "Vending_machine.h"
#include <iostream>
using namespace std;


int kevin = 1;
// void some_other_function();

void Vending_machine::ordered_chicken(){
    cout << "The machine get your order\n";
    price = 60;
}

int Vending_machine::money(){
    return price;
}

int main(){
    Vending_machine machine1;
    machine1.ordered_chicken();
    cout << "Price = " << machine1.money() << endl;
    
    some_other_function();
    return 0;
}