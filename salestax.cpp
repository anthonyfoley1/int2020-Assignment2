//Author: Anthony Foley 2313898
//CPSC-298-07
//salestax problem


#include <iostream>
using namespace std;

float addTax(float taxRate,float cost) {
  float taxes=0;
  float total=0; //Here I declare and initialize varibles

  taxes=1+(taxRate/100); //Here I convert the tax rate into number I can multiply into
  total=cost*taxes; //This is where I multiply the cost by the taxes

  return total;
  }

int main(int argc, char const *argv[])
  {
  float textbook; //Here I call the function with sample cost and tax rate
  textbook=addTax(9.4,89.99);

  cout<<"Your textbook will cost you $"<<textbook<<"."<<endl;

  return 0;
  }
