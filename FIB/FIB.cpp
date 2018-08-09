#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

// int a = 0 ;
// int b = 1 ;

double Fib(int n, int k);
double Bif(int n, int k);

int main(int argc, char *argv[]){
  ifstream inFile(argv[1]);
  int n,k ;
  inFile >>n>>k;

  double sum = Fib(n,k)+Bif(n,k);
  printf("The total number of rabbit pairs after n months:\t %f",sum);
}
                                        // waiting mature.
double Fib(int n,int k){                   // interactional function cannot avoid redefining all variables.
  int a = 0;
  if (n <= 1){
    return a ;
  }
  return Fib(n-1,k)+Bif(n-1,k);
}

double Bif(int n, int k){                  // giving birth
  int b = 1;
  if(n <= 1){
    return b ;
  }
  return Fib(n-1,k)*k;
}
