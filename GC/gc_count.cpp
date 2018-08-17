#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std ;

double getPercentage(string dna);
void highestPercentage(vector<string> &seq);

int main(int argc, char* argv[]){
  ifstream input(argv[1]);
  vector<string> seq;
  string lines;
  int count = -1 ;

  while(getline(input,lines)){
    if(lines[0]=='>'){
      count++;
      seq.push_back(lines.substr(1,lines.length()) + " ");
    }else{
      seq[count] += lines;
    }
  }
  highestPercentage(seq);
}

bool isGC(char nucleotide){return (nucleotide=='C'||nucleotide=='G') ;}

double getPercentage(string dna){
    double Total = 0;
    Total = count_if(dna.begin(),dna.end(),isGC);
    return Total/dna.length();
    }

void highestPercentage(vector<string> &seq){
  string name= " ";
  string dna;
  double highestScore = 0;

  for(int i = 0; i < seq.size(); i++){
    string tmpname = seq[i].substr(0,seq[i].find(" "));
    dna = seq[i].substr(seq[i].find(" ")+1,seq[i].size());
    double score = getPercentage(dna);
    if(score>highestScore){
      name = tmpname;
      highestScore = score;
    }
  }

  cout << "Name\t"<<name<<"\nGC content\t"<<highestScore*100<<endl;
}
