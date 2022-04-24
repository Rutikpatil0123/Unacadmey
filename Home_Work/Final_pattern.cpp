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


void inverted_half_pyramid(int n){


    for(int i = 0; i <= n; i++){


        for(int j = 1; j <= n-i+1; j++){

            cout << "* ";
        }

        cout << endl;
    }
}

void hollow_inverted_half_pyramid(int n){

    for(int  i = 1; i <= n; i++){

        for(int j = 1; j <= n-i+1; j++){

            if(j == 1  || j == n-i+1 || i == 1){

                cout <<"* ";
            }else{

                cout <<"  ";
            }
        }

        cout << endl;
    }
}

void full_pyramid(int n){

    for(int i = 1; i <= n; i++){

       
       for(int j = 1; j <= n-i; j++){

           cout <<" ";
       }

       for(int j = 1; j <=i; j++){

           cout <<"* ";
       }
       

       cout << endl;
    }
}

void inverted_full_pyramid(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j < i; j++){

            cout <<" ";
        }

        for(int j = 1; j <= n-i+1; j++){

            cout <<"* ";
        }

        cout << endl;
    }
}


void hollow_pyramid(int n){

    for(int i = 1; i <= n; i++){


        for(int j = 1; j <= n-i; j++){

            cout <<" ";
        }

        for(int j = 1; j <= i; j++){

            if(j == 1 || i == j || i == n){

                cout <<"* ";
            }else{

                cout <<"  ";
            }
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

    inverted_half_pyramid(n);

    cout << endl;

    hollow_inverted_half_pyramid(n);

    cout << endl;

    full_pyramid(n);

    cout << endl;

    inverted_full_pyramid(n);

    cout << endl;

    hollow_pyramid(n);

    cout << endl;

}

