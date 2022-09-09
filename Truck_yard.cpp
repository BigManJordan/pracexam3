#include "Truck_yard.h"
#include "Truck.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

Truck_yard::Truck_yard(){
  cap = 0;
}

Truck_yard::Truck_yard(int capacity){
  cap = capacity;
}

int Truck_yard::get_total_stock_count(){
  return total = 0;
}
