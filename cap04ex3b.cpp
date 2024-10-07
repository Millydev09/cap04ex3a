//excap04ex3b.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main (void){
  int n;

  cout << "entre com valor de n:" << endl;
  cin >> n;
  if (n<0){
    n = n*-1;
  }
  cout << n << endl;
  return 0;
}
