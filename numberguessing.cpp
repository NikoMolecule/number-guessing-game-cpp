#include <bits/stdc++.h>
using namespace std;
int main() {
  srand (time(NULL));
  int randomNum = rand() % 10 + 1;
  int n, i = 0;
  cout << "Hello, this is number guessing game, you have 3 tries to find number between 1 to 10" << endl;
  cout << "Lets start, enter the first number!" << endl;
  cout << randomNum << endl;

  while(i != 3){
    cin >> n;
    if(i == 2 && n != randomNum) {
      cout << "You Lost";
      break;
    }else if(n == randomNum){
      cout << "Congratulations";
      break;
    }else if(n > randomNum){
      cout << "The secret number is lower" << endl;
      i++;
    }else if(n < randomNum){
      cout << "The secret number is higher" << endl;
      i++;
    }
  }
}