#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// file size is too big so I have to trim it

int main(int args, char *argv[]){
    map<const char, int> cof;
        cof['F']= 2,  cof['L']= 6, cof['S']= 6,  cof['Y']= 2,
        cof['C']= 2,  cof['W']= 1, cof['P']= 4,  cof['H']= 2,
        cof['Q']= 2,  cof['R']= 6, cof['I']= 3,  cof['M']= 1,
        cof['T']= 4,  cof['N']= 2, cof['K']= 2,  cof['V']= 4,
        cof['A']= 4,  cof['D']= 2, cof['E']= 2,  cof['G']= 4;

    ifstream input(argv[1]);
    string line;
    getline(input,line);

    const vector<char> charvect(line.begin(),line.end());


    long long int total = 3 ;
    for(int i = 0; i < charvect.size(); i++){
        int num ;
        num = cof[charvect[i]];
        total *= num ;
    }
    int fac = 1000000;
    cout << total % fac << endl;
}
