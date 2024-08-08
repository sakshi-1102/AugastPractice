// #include<iostream>
// using namespace std;

// int main(){
//   int x, y; 
//   cin >> x >> y ;
//   cout <<"value of x: "<< x << " and y: " <<y;
//   return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int marks;
//     cin >> marks;
//     if(marks < 25){
//         cout << " F";
//     }
//     else if(marks <= 40){
//         cout<<"E";
//     }
//     else if(marks<=49){
//         cout<< "D";
//     }
//     else if(marks <=59){
//         cout<< "C";
//     }
//     else if(marks<=79){
//         cout << "D";
//     }
//     else if(marks <= 100){
//         cout<< "A";
//     }
//     return 0;
    
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cin >>  age;
//     if(age < 18){
//         cout<<"not eligable for job";
//     }
//     else if(age <=57){
//         cout<<"eligible for job";
//         if(age >=55){
//             cout<< "retirement will be soon";
//         }
//     }
//     else{
//         cout<< "retirmnet time";
//     }
//     return 0;
    
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
   int day;
   cin >> day;
   
   switch(day){
       case 1:
       cout<<"Monday";
       break;
       
       case 2:
       cout<<"Tuesday";
       break;
       
       case 3: 
       cout<< "wed";
       break;
       
       
       case 4:
       cout<< "thur";
       break;
       
       case 5:
       cout<< "fri";
       break;
       
       case 6:
       cout<< "sat";
       break;
       
       case 7:
       cout<< "sun";
       
       default :
       cout<< "invalid";
       
   }
   cout<< "checked";
   
    return 0;
    
}