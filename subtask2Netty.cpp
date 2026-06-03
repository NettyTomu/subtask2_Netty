#include <iostream>
using namespace std;


int main() {
    // declaring the variables of tenmperature as floats
    float temp1, temp2, temp3;

    // getting temperature inputs
    cout << "Enter temperature 1:"<< endl;
    cin >> temp1;

    cout << "Enter temperature 2:"<< endl;
    cin >> temp2;


    // beging of if statements to test if oil is ready to fry

    if (temp2 - temp1 > 50){
        cout <<"Reduce oil temperature before taking the third reading \n" ;
        cout << "Enter temperature 3:"<< endl;
         cin >> temp3;

    }
    else if(temp2 - temp1 < 10){
        cout <<"increase oil temperature before taking the third reading \n" ;
        cout << "Enter temperature 3:"<< endl;
         cin >> temp3;
    }

    else {
        cout << "Enter temperature 3:"<< endl;
         cin >> temp3;
    }
    
    if(temp3 >= 149 && temp3 <= 190){

        cout << "You may start frying the magwinyas";
    }

    else  {
       cout <<"Oil is not ready for frying";
    }

    return 0;

 }