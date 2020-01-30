//Author: Anthony Foley 2313898
//CPSC-298-07
//Convert feet and inches to meters and centimeters 

#include <iostream>
using namespace std;


void conversion(double feet, double inches)
  { //Here I Initialize the variables
    double meters=0.0;
    double centimeters=0.0;
    double totalInches=0.0;
    double totalFeet=0.0;
    const double meterInFoot=0.3048;

    //Here I convert everything to inches so I can easily convert to metric units
    totalInches=(feet*12)+inches;
    centimeters=(totalInches*2.54);

    //This loop helps take out 100cm (or 1M) so I can have an integer for meters
    while (centimeters>100) {
      centimeters -= 100;
      meters += 1;
    }

    cout<<"The length in meters is:  "<<meters<<endl;
    cout<<"The length in centimeters is:  "<<centimeters<<endl;
}

void userInput() {
  string userInput="";
  int limit=0;
  while (userInput!="quit") {
    double userFeet=0;
    double userInches=0;
    limit++;

    cout<<"Please enter the length in feet:  "<<endl;
    cin>>userFeet;
    cout<<"Please enter the length in inches:  "<<endl;
    cin>>userInches;

    conversion(userFeet,userInches);

    cout<<"Please type \"quit\" to finish, otherwise press any letter to keep going.."<<endl;
    cin>>userInput;
    //This is to break the loop if loop becomes infinite
    if (limit>10) {
      cout<<"Program quit"<<endl;
      break;      }
    }

    cout<<"Goodbye!"<<endl;
}

int main(int argc, char const *argv[]) {

  userInput();
  return 0;
}
