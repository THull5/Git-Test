#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
  int n;
  cout << "Hello World!" << endl;
  cout << "Please give a number: ";
  cin >> n;
  
  int total = sum(n);
  cout << "Your value is " << total << endl;
  return 0;
}



