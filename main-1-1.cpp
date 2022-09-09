#include "Truck.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(void){
  Truck null;
  Truck ford(5, "Ford");
  
  cout << null.get_brand_name() << null.get_brand_code() << endl;
  cout << ford.get_brand_name() << ford.get_brand_code() << endl;
}
