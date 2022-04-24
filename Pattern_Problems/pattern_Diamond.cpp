#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n-i+1; j++){

            cout << " ";
        }

        for(int k = 1; k <= i; k++){

            cout << "*" << " ";
        }

        cout << endl;
    }

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i+1; j++){

            cout <<" ";
        }

        for(int j = 1; j <= n-i; j++){

            cout << "*" <<" ";
        }

        cout << endl;
    }

}

int main(){

    int n;

    cout << "Enter the number base of triangle :" << endl;

    cin >> n;

    pattern(n);

    
}



/*

   pattern


         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *    
     

     */