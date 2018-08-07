#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
  double k, m, n;
  double l ;
  ifstream inFile(argv[1]);
  inFile >> k >> m >> n ;              // chain operator
  l = k + m + n;

  double prob ;
  prob = (k/l)*1*1 + (m/l)*(k/(l-1) + n/(l-1)*0.5 + (m-1)/(l-1)*0.75) + (n/l)*(k/(l-1)+m/(l-1)*0.5) ;
  cout << "The probability that two randomly selected mating produce a dominant phenotype:\t" << prob << endl;

  return 0;
}
