//Author: Anthony Foley 2313898
//CPSC-298-07
//arrayproblem problem


#include <iostream>
using namespace std;

int main(int argc,char **argv) {
  int myArrary[10];
  int number;


  for (int i=0;i<10;++i) // Here I can add numbers to my array
    {
    cout<<"Please enter a positive integer:  ";
    cin>>number;

    while (number<0) {
      cout<<"You need a positive integer: "<<endl;
      cin>>number;
    }
    myArrary[i]=number;
    }

  cout<<"Here is your array: "<<endl;

  for (int x = 0; x < 10; ++x)  //Here I will loop through the array and print out each index
    {
    cout<<myArrary[x]<<endl;
    }



  return 0;
  }
