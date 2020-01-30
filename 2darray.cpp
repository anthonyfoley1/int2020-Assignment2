//Author: Anthony Foley 2313898
//CPSC-298-07
//2darray problem

#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
  int a[4][5];//Initialize my variables
  int input=0;

  //I make 2 different for loops to write in each index of the array
  for (int i = 0; i < 4; ++i) {
    cout<<"Please enter 5 integers seperated by a space: "; //I put this cout statement here to make it faster to input line by line
    for (int z = 0; z < 5; ++z) {

      cin>>input;
      a[i][z]=input;
    }
  }

//Here I use the same for loops from above but now use it to print out a 4X5 array
cout<<"\n"<<"Here is your 2D Array:  "<<endl;
  for (int i = 0; i < 4; ++i) {
    for (int z = 0; z < 5; ++z) {
      cout<<a[i][z]<<" ";
    }
    cout<<endl;
  }

cout<<"You're welcome!"<<endl;

  return 0;
}
