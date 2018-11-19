#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[] ){
  ifstream dataFile(argv[1]);
  double num1,num2,num3,num4,num5,num6;
  double E1, E2;
//import data from tsv file
dataFile >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 ;

E1 = num1*(1.0) + num2*(1.0) +num3*(1.0) + num4*(0.75) + num5*(0.5) + num6*(0.0);
E2 = E1 * 2;
printf("%f\n",E2);
// cout keep output the integer value.
dataFile.close();
}
