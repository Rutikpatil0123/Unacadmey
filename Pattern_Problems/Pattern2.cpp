#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
  
  // for loop for number of rows
  
  for(int i = 1; i <= n; i++){
  
    // for loop which will print i number of stars in ith column

      for(int k = 1; k <= i; k++){

          cout << "*" << " " ;

      }

      cout << endl;
  }

}

int main(){
  
  int n;

  cout << "Enter the length of triangel :" << endl;

  cin >> n;

  pattern(n);
    
}