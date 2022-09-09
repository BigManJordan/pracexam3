#include "Truck.h"
#include "Truck_yard.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(void){
  Truck_yard a;
  Truck_yard b(100);
  cout << a.get_total_stock_count() << " " << b.get_total_stock_count();
}
