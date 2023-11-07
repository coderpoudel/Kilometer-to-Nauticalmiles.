#include <stdio.h> 
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;//it is used to give direction to the coding we can either use this operator or use "std::" in the b lock begore every cin, cout and endl.
// B: Using the docstring, document/identity the objective of thisprogram, the file name, the author, version and date.
//**********
/**
 * The PoudelProg03C.cpp program implements the following applications:
 * programming exercise 03C takes Kilometer as input and prints the corresponding number of nautical miles.
 * 
 * @filename: PoudelProg03C.cpp
 * @author: Anup Poudel 
 * @version 1.0
 * @since 10/26/2023
 */
 /********
  * The main function serves as the program's driver, In here:
  * We use special 'const int' that defines a constant variable as integers.
  * declaring kilometerToNauticalMile as a Constant value
  * Constant for the approximation: 1/10000 of the distance between North Pole and equator
  * Declaring kilometerToNauticalMile, kilometers and calculated nautical miles as doubles to store large numbers.
  * Promt the user to enter kilometers.
  * use the formula (nauticalmiles = kilometers * Kilometertonauticalmile), to calculate the value of nauticalmiles.
  * Output the value of the calculated nauticalmiles and display it using the beautiful message.
  

  * @param args unused
  * @return nothing is retrned
  */
  


int main() {
    
    const double kilometerToNauticalMile = 1.0 / 10000 * 90 * 60;

    double kilometers, nauticalMiles;
    
    cout << "The following programming  takes kilometer as input and prints the corresponding number of nautical miles:" << endl <<endl;

    cout << "Enter number of kilometers : "; // Prompt user for input
    cin >> kilometers;

    nauticalMiles = kilometers * kilometerToNauticalMile; // Prompt user for input

    // Output the result
    cout << "nautical miles: " << nauticalMiles << endl;
    
    cout << "With the kilometers of " << kilometers << ", the total nauticalmiles is " << nauticalMiles << endl << endl;
 
    return 0;
}




    
    



    
    