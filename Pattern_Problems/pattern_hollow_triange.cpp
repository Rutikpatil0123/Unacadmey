#include<bits/stdc++.h>
using namespace std;

void pattern(int n){

    for(int i = 1 ; i <= n; i++){

        for(int j = 1; j <= n-i+1; j++){

            cout << " ";
        }

        

        for(int j = 1; j <= i; j++){
           
           if(i == n){

               cout << i <<" ";
              
           }else if(j == i || j == 1){

               cout << i <<" ";

           }else{
             
              cout <<"  ";
           }
        }

        cout << endl;
    }
}

int main(){

  int n;

  cout << "Enter the length of triangle :" << endl;

  cin >> n;

  pattern(n);
    
}