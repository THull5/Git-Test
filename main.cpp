#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int product(int n){
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    return product;
}

int main(){
  int n;
  cout << "Hello World!" << endl;
  cout << "Please give a number: ";
  cin >> n;
  
  int total = sum(n);
  int total2 = product(n);
  cout << "Your sum value is " << total << " and your product value is " << 
  total2 << endl;
  return 0;
}



