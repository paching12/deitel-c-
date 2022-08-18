// This program generates the IMC or BMI (Body Mass Index)
#include <iostream>

/*
    
                weight (pounds) * 703
    BMI = ___________________________________

                height (in) *  height (in)

*/

using namespace std;

// Prototipos
int getUnitMeasure(void);
double getWeight(void);
double getHeight(void);
double getBMI(double, double, int);
void printMenu(void);

// Constants
const int POUNDS = 703;

int main() {

    int unitMeasure = 0;
    double weight = 0.0;
    double height = 0.0;

    // Print info
    printMenu();

    // Get type of measure
    unitMeasure = getUnitMeasure();

    // Get weight and height
    weight = getWeight();
    height = getHeight();

    cout << "BMI calculated = " << getBMI(weight, height, unitMeasure) << endl;

    return 0;
}

// This function prints the current menu for measure BMI 
void printMenu() {
    cout << "****************************************" << endl;
    cout << "*             BMI VALUES               *" << endl;
    cout << "****************************************" << endl;

    cout << "Under weight: " << "less 18.5" << endl;
    cout << "Normal: " << "between 18.5 and 24.9" << endl;
    cout << "Overweight: " << "between 25 and 29.9" << endl;
    cout << "Obese: " << "30 or more" << endl << endl;
}

// This function gets weight from the keyboard
double getWeight() {
    double weight = 0.0; 
    cout << "Insert your weight" << endl; 
    cin >> weight;
    return weight;
}

// This function gets height from the keyboard
double getHeight() {
    double height = 0.0; 
    cout << "Insert your height" << endl; 
    cin >> height;
    return height;
}

// This function gets BMI with weight and hight
double getBMI(double weight, double height, int unitMeasure) {
    return (weight * (unitMeasure ? (double) POUNDS * 1 : 1)) /  (height * height);
}

int getUnitMeasure(void) {
    int unitMeasure = 0; 
    cout << "Type 0 for meters/kilograms" << endl; 
    cout << "Type 1 for pounds/inches" << endl; 
    cout << "Please select your unit of measurement (0 = mt/kg, 1 = lb/in)" << endl; 
    cin >> unitMeasure;
    return unitMeasure;
}