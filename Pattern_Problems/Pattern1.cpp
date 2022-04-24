#include<bits/stdc++.h>
using namespace std;

void pattern(int row, int column){

 // for loop for each row
    
    for(int i = 0; i < row; i++){

        // for each column print a "*"

        for(int j = 0; j < column; j++){

            cout << "*" <<" ";
        }

        cout << endl;
    }
}

int main(){

 int row, column;   

 cout << "Enter the number of rows: " << endl;

 cin >> row;

 cout << "Enter the number of columns: " << endl;

 cin >> column;

 pattern(row, column);
}