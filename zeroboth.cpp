///Author: Anthony Foley 2313898
//CPSC-298-07
//salestax problem

#include <iostream>
using namespace std;

void zeroBoth(int &x, int &y) {
  x=0;
  y=0;
}



int main(int argc, char const *argv[]) {
  int kobe=8;
  int bryant=24;

  zeroBoth(kobe,bryant);

  cout<<"X is: "<<kobe<<endl<<"Y is: "<<bryant<<endl;

}
