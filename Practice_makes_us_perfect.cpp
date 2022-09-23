#include <iostream>
using namespace std;

int main(){
  int numOfProblems[4];
  int limit = 10;
  int counter = 0;
  for(int i = 0; i < 4; i++){
    cin >> numOfProblems[i];
    if(numOfProblems[i] >= limit) counter++;
  }

  cout << counter;

  return 0; 

}