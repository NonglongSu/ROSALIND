#include <iostream>
#include <iterator>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
  ifstream input(argv[1]);
  vector<string> seq;
  string line;

  if(!input.is_open()){
    printf ("Error opening file");
    exit (EXIT_FAILURE);
  }

while(getline(input,line)){
  seq.push_back(line);
}

int dH = 0 ;
for(int i = 0; i < seq[0].size();i++){
  if(seq[0][i]!= seq[1][i]){
    dH++;
  }
}

printf("%d\n", dH);
// while(getline(input,line)){
//   stringstream linestream(line);
//   string data;
//   string l1;
//   string l2;
//   getline(linestream,data,'\n');
//   linestream >> l1 >> l2;
// }



  input.close();

}
