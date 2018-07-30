#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <fstream>

using namespace std;

void countBases(string dna);

int main(int argc, char *argv[]){
  ifstream input(argv[1]);
  string line;

  while(getline(input,line)){
    countBases(line);
  }

  return 0;
}

void countBases(string dna){
   int countA = 0;
   int countG = 0;
   int countC = 0;
   int countT = 0;

   for(string::iterator it=dna.begin(); it!=dna.end(); ++it){
     switch(*it){
       case 'A':
            countA++;
            break;
       case 'G':
            countG++;
            break;
       case 'C':
            countC++;
            break;
       case 'T':
            countT++;
            break;
     }
   }
   cout<< "A:"<<countA<<"\tG:"<<countG<<"\tC:"<<countC<<"\tT:"<<countT<<endl;
}
