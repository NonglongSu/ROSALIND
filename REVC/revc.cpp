#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>

using namespace std;

char complement(char n);

int main(int argc, char *argv[]){
  ifstream input(argv[1]);
  string s;
  getline(input,s);

  transform(s.begin(),s.end(),s.begin(),complement);
  reverse(s.begin(),s.end());

  cout << "The reverse complement seq:\n"<<s<<endl;

  return 0;
}

char complement(char n){
  switch (n)
  {
    case 'A':
     return 'T';
    case 'C':
     return 'G';
    case 'G':
     return 'C';
    case 'T':
     return 'A';
  }
  return 0;            // control reaches end of non-void function [-Wreturn-type] solved.
}
