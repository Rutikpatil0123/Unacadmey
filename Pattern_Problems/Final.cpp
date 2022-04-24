#include<bits/stdc++.h>
using namespace std;

void half_Pyramid(int n){


    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){


            cout <<"* ";
        }

        cout << endl;
    }
}



int main(){

    cout <<"Enter the number of rows and column" << endl;

    int n;

    cin >> n;
    
    half_Pyramid(n);

    cout << endl;

}

