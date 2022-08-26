// This program generates the IMC or BMI (Body Mass Index)
#include <iostream>
/*
    
                weight (pounds) * 703
    BMI = ___________________________________

                height (in) *  height (in)

*/

using namespace std;

// Prototipos
double getBMI(double, double, int);
double getData(string);
int getUnitMeasure(void);
void printInfo(void);

// Constants
const int POUNDS = 703;
const int SI = 0;
const int UI = 1;
const float UNDER_WEIGHT_RANGE = 18.5;
const float NORMAL_WEIGHT_RANGE = 24.9;
const float OBESE_RANGE = 29.9;

int main() {

    int unitMeasure = 0;
    double weight = 0.0;
    double height = 0.0;
    double bmi = 0.0;

    // Print info
    printInfo();

    // Get from the user type of measure
    unitMeasure = getUnitMeasure();

    // Get weight and height
    weight = getData("Insert your weight");
    height = getData("Insert your height");

    bmi = getBMI(weight, height, unitMeasure);
    cout << "BMI calculated = " << bmi << endl;

    // Choose the BMI related to the result
    if( bmi <= UNDER_WEIGHT_RANGE ) 
        cout << "-> Under weight: " << "less 18.5" << endl;
    if( bmi > UNDER_WEIGHT_RANGE && bmi <= NORMAL_WEIGHT_RANGE ) 
        cout << "-> Normal weight: " << "between 18.5 and 24.9" << endl;
    if( bmi > NORMAL_WEIGHT_RANGE && bmi <= OBESE_RANGE )
        cout << "-> Overweight:"  << "between 25 and 29.9" << endl;
    if( bmi > OBESE_RANGE ) 
        cout << "-> Obese: " << "30 or more" << endl;

    return 0;
}


// This function gets double data from the input
double getData(string message) {
    double data = 0.0; 
    cout << message << endl; 
    cin >> data;
    return data;
}

// This function gets BMI with weight and hight
double getBMI(double weight, double height, int unitMeasure) {
    return (weight * (unitMeasure == UI ? (double) POUNDS * 1 : 1)) /  (height * height);
}

// getUnitMeasure retrieves type of unit of measure.
int getUnitMeasure(void) {
    int unitMeasure = 0; 
    cout << "Type 0 for meters/kilograms" << endl; 
    cout << "Type 1 for pounds/inches" << endl; 
    cout << "Please select your unit of measurement (0 = mt/kg[SI], 1 = lb/in [IS])" << endl; 
    cin >> unitMeasure;
    return unitMeasure;
}

// This function prints the current menu for measure BMI 
void printInfo() {
    cout << "****************************************" << endl;
    cout << "*             BMI VALUES               *" << endl;
    cout << "****************************************" << endl;

    cout << "Under weight: " << "less 18.5" << endl;
    cout << "Normal: " << "between 18.5 and 24.9" << endl;
    cout << "Overweight: " << "between 25 and 29.9" << endl;
    cout << "Obese: " << "30 or more" << endl << endl;
}