// This program generates the IMC or BMI (Body Mass Index)
#include <iostream>

/*
    
                weight (pounds) * 703
    BMI = ___________________________________

                height (in) *  height (in)

*/

using namespace std;

// Prototipos
void printMenu(void);
double getWeight(void);
double getHeight(void);
double getBMI(double, double); 
// Constants
const int POUNDS = 703;

int main() {
    double weight = 0.0;
    double height = 0.0;

    printMenu();

    // Get weight and height
    weight = getWeight();
    height = getHeight();

    cout << "BMI calculated = " << getBMI(weight, height) << endl;

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
double getBMI(double weight, double height) {
    return (weight * (double) POUNDS) /  (height * height);
}