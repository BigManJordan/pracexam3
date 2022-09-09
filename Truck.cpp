#include "Truck.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

Truck::Truck(){
  code = 0;
  name = "";
}

Truck::Truck(int b_code, string b_name){
  code = b_code;
  name = b_name;
}

string Truck::get_brand_name(){
  return name;
}

int Truck::get_brand_code(){
  return code;
}
