#include <iostream>
using namespace std;

int main () {
int n, sum=0, counter = 0 ;

for (int i = -10; i < 10 ; i+=2) {
  cin >> n;
  sum += n;
  counter ++;
}

cout << sum;
cout << counter;
}