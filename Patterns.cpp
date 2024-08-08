#include<bits/stdc++.h>
using namespace std;

void print1(){
  for(int i = 0; i<4; i++){
    for(int j = 0; j<4; j++){
      cout << "*";
    }
    cout << endl;
  }
}

void print2(){
  for(int i = 0; i<5; i++){
    for(int j = 0; j<=i; j++){
      cout << "* ";
    }
    cout <<endl;
  }
}

void print3(){
  for(int i = 1; i<=6;i++){
    for(int j = 1; j<=i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}

void print4(){
  for(int i = 1; i<=6; i++){
    for(int j = 1; j<=i; j++){
      cout << i << " ";
    }
    cout << endl;
  }
}

void print5(){
  for(int i = 1; i<= 6; i++){
    for(int j =1; j<6-i+1; j++ ){
      cout << "* ";
    }
    cout << endl;
  }
}

void print6(){
  for(int i = 1; i<= 6; i++){
    for(int j = 1; j<6-i+1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void print7(){
  for(int i = 1; i<4; i++){
    //for space
     for(int j = 1; j<9-i-1; j++){
     cout << " ";
     }

    //for stars
for(int j =1; j<2*i+1; j++){
  cout << "* ";
}

    //for space
    for(int j = 1; j<9-i-1; j++){
      cout << " ";
    }
    cout << endl;
  }
}

void print8(){


  for(int i = 0; i<=5; i++){

     for(int j = 0; j<2*5+1; j++){
      cout << " ";}

      for(int j = 0; j<2*i -(2*i +1); j++){
     cout << "* ";
      }
      for(int j = 0; j<i; j++){
        cout << " ";
      }
     cout << endl;
  }
}

void print9(){
  //8 +7
}

void print10(){
  
}
//////////////////////////////////////
int main(){
  // int n;
  // cin >> n;
  // print7(n);

  print8();

  }


