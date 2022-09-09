//
//  Truck_yard.hpp
//  pracexam3
//
//  Created by Jordan Le on 9/9/2022.
//

#ifndef Truck_yard_h
#define Truck_yard_h

#include <stdio.h>

class Truck_yard{
private:
  int cap;
  int total;
public:
  Truck_yard();                         // default constructor for yard with zero capacity
  Truck_yard(int capacity);             // constructor for yard that can hold "capacity" trucks
  int get_total_stock_count();          // count of the current number of trucks in yard
//  int get_stock_count(int code);        // count of the number of trucks with brand code equal to "code"
//  Truck *get_current_stock_list();      // gets an array containing all the trucks in the yard
//  bool add_stock(Truck c);              // tries to add truck to yard if there is enough spare capacity to fit it
                                        // then will return true.
//  ~Truck_yard();                    // destructor

};

#endif /* Truck_yard_h */
