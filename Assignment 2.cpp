//Assignment No : 2
//Enter Your Name Here
//Enter Your Roll No Here
//Calculation of Specific Stiffness and Specific Strength and Failure of a Material

#include <iostream>
using namespace std;
double YM, rho, sigma_t, Specific_Stiffness, Specific_Strength,Compressive_Strength,Applied_Stress;

int main() {
    cout << "Enter Young's Modulus (in GPa): ";
    cin >> YM;
    cout << "Enter Density (in kg/m^3): ";
    cin >> rho; 
    cout << "Enter Tensile Strength (in MPa): ";
    cin >> sigma_t;
    cout << "Enter Compressive Strength (in MPa): ";
    cin >> Compressive_Strength;
    cout << "Enter Applied Stress (in MPa): ";
    cin >> Applied_Stress;
    Specific_Stiffness = YM / rho; 
    Specific_Strength = (sigma_t) / rho; 
    cout << "--------------- RESULTS -------------------" << endl;
    cout << "Specific Stiffness: " << Specific_Stiffness << " Gpa m^3/kg" << endl;
    cout << "Specific Strength: " << Specific_Strength << " Mpa m^3/kg" << endl;
    cout << "------------------- Material Failure Analysis --------------- " << endl;
    if (Applied_Stress > Compressive_Strength){
        cout << "Material will Fail in Compression" << endl;
        }
        else if (Applied_Stress > sigma_t){
        cout << "Material will Fail in Tension" << endl;
        }
        else{
        cout << "Material is Safe" << endl;
        }

    return 0;
    }
