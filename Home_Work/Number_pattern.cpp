#include<bits/stdc++.h>
using namespace std;

void half_pyramid(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){

            cout << j << " ";
        }

        cout << endl;
    }
}

void inverted_half_pyramid(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n-i+1; j++){

            cout << j << " ";
        }

        cout << endl;
    }
}

void hollow_half_pyramid(int n){


    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){

            if(j == 1 || i == n || j == i){

                cout << j << " ";
            }else{

                cout <<"  ";
            }
        }

        cout << endl;
    }
}

void full_pyramid(int n){
    int counter = 1;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n-i; j++){

            cout <<" ";
        }


        for(int j = 1; j <= i; j++){

            cout << counter <<" ";
            counter++;
        }
    }
}

void solid_diamond(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n-i; j++){

            cout <<" ";
        }

        for(int j = 1; j <= i; j++){

            cout <<"* ";
        }

        cout << endl;
    }

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){

            cout <<" ";
        }

        for(int j = 1; j <= n-i; j++){

            cout <<"* ";

        }

        cout << endl;
    }
}

void hollow_diamond(int n){
 

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n-i; j++){

            cout <<" ";
        }

        for(int j = 1; j <= i; j++){

            if(j == 1 || i == j){

                cout <<"* ";
            }else{

                cout <<"  ";
            }
        }

        cout << endl;
    }

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){

            cout <<" ";
        }

        for(int j = 1; j <= n-i; j++){

            if(j == 1 || n-i == j){


                cout <<"* ";
            }else{
                
                cout <<"  ";
            }

        }

        cout << endl;
    }

}


void pattern6(int n){

    int counter = 1;

    for(int i = 0; i <= n; i++){

        for(int j = 1; j <= i; j++){

            cout << counter <<" ";

            counter++;
        }

        cout << endl;
    }
}

void solid_half_diamond(int n){
   
   for(int i = 1; i <= n; i++){

       for(int j = 1; j <= i; j++){

           cout << "* ";
       }

       cout << endl;
   }

   for(int i = 1; i <= n; i++){

       for(int j = 1; j <= n-i; j++){

           cout << "* ";
       }

       cout << endl;
   }
          
}

int main(){

  int n;  
  
  cout <<"Enter the number of rows and column" << endl;

  cin >> n;
  
  half_pyramid(n);

  cout << endl;

  inverted_half_pyramid(n);

  cout << endl;

  hollow_half_pyramid(n);

  cout << endl;

  pattern6(n);

  cout << endl;

  solid_diamond(n);

  cout << endl;

  hollow_diamond(n);

  cout << endl;

  solid_half_diamond(n);

  cout << endl;

}