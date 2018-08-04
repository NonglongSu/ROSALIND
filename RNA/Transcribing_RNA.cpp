#include <iostream>
#include <iterator>
#include  <string>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
  ifstream input(argv[1]);
  string line;
  getline(input,line);
  replace(line.begin(),line.end(),'T','U');

  cout << "Transcribed RNA seq:\n" <<line << endl;
  return 0 ;
}
