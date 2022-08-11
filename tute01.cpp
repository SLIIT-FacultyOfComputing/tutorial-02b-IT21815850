
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>

int main()
{
  float cm,inches;
  std::cout<<"Enter the length in cm:";
  std::cin>>cm;
  inches=cm/2.54;
  std::cout<<"Length in inches:"<<inches<<std::endl;

  return 0;
}