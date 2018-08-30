#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>               // find all positions of the pattern string.

using namespace std;

int main(int args, char* argv[]){
    ifstream input(argv[1]);
    string line;
    vector<string> seq;
    vector<int> pos;
    if(!input){

		cout<< "Cannot open input file!" << endl;
		return 1;
	}

    while(getline(input,line)){
        seq.push_back(line);
    }

    regex rx(seq[1]) ;
    for(auto it=sregex_iterator(seq[0].begin(),seq[0].end(),rx);
        it != sregex_iterator();++it){
            pos.push_back(it->position());
        }

        const int fix =1 ;
        for(auto iter = pos.begin();iter!=pos.end();++iter){
            cout << *iter+fix << '\t';
        }
        cout << "\n";

    input.close();
}
