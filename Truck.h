//
//  Truck.hpp
//  pracexam3
//
//  Created by Jordan Le on 9/9/2022.
//

#ifndef Truck_h
#define Truck_h

#include <stdio.h>
#include <string>

class Truck{
private:
  int code;
  std::string name;
public:
  Truck();                                     // default constructor - makes new truck with brand code number 0 and
                                               // and empty string "" for brand name

  Truck(int b_code, std::string b_name);       // constructor taking string representing brand name
                                               // and integer representing code for that brand

  std::string get_brand_name();                // returns the brand name of the truck
  int get_brand_code();                        // returns the brand code number of truck
                                   // destructor
};

#endif /* Truck_h */
