#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;





int main(int args, char *argv[]){

    map<const string,string> codon;
        codon["UUU"]= 'F',   codon["CUU"]= 'L',  codon["AUU"]= 'I',  codon["GUU"]= 'V',
        codon["UUC"]= 'F',   codon["CUC"]= 'L',  codon["AUC"]= 'I',  codon["GUC"]= 'V',
        codon["UUA"]= 'L',   codon["CUA"]= 'L',  codon["AUA"]= 'I',  codon["GUA"]= 'V',
        codon["UUG"]= 'L',   codon["CUG"]= 'L',  codon["AUG"]= 'M',  codon["GUG"]= 'V',
        codon["UCU"]= 'S',   codon["CCU"]= 'P',  codon["ACU"]= 'T',  codon["GCU"]= 'A',
        codon["UCC"]= 'S',   codon["CCC"]= 'P',  codon["ACC"]= 'T',  codon["GCC"]= 'A',
        codon["UCA"]= 'S',   codon["CCA"]= 'P',  codon["ACA"]= 'T',  codon["GCA"]= 'A',
        codon["UCG"]= 'S',   codon["CCG"]= 'P',  codon["ACG"]= 'T',  codon["GCG"]= 'A',
        codon["UAU"]= 'Y',   codon["CAU"]= 'H',  codon["AAU"]= 'N',  codon["GAU"]= 'D',
        codon["UAC"]= 'Y',   codon["CAC"]= 'H',  codon["AAC"]= 'N',  codon["GAC"]= 'D',
        codon["UAA"]= "STOP",codon["CAA"]= 'Q',  codon["AAA"]= 'K',  codon["GAA"]= 'E',
        codon["UAG"]= "STOP",codon["CAG"]= 'Q',  codon["AAG"]= 'K',  codon["GAG"]= 'E',
        codon["UGU"]= 'C',   codon["CGU"]= 'R',  codon["AGU"]= 'S',  codon["GGU"]= 'G',
        codon["UGC"]= 'C',   codon["CGC"]= 'R',  codon["AGC"]= 'S',  codon["GGC"]= 'G',
        codon["UGA"]= "STOP",codon["CGA"]= 'R',  codon["AGA"]= 'R',  codon["GGA"]= 'G',
        codon["UGG"]= 'W',   codon["CGG"]= 'R',  codon["AGG"]= 'R',  codon["GGG"]= 'G';

    ifstream input(argv[1]);
    string line;
    string result = "";
    string symbol;
    getline(input,line);

for(int i=0;i<line.length();i+=3){
    symbol = codon[line.substr(i,3)];
    if(symbol=="STOP"){break;}
    result += symbol;
    }
    cout <<"The encoded protein string>>\n"<<result<<endl;

    input.close();
}
