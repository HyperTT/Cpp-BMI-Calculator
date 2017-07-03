#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float weight;
    float feet, inch;//height
    float num, denom;
    float BMI;
    cout << "== BMI Calculator ==\n" << "Step 1: Enter height\n" << "Feet:\n";
    cin >> feet;
    cout << "Inches:\n";
    cin >> inch;
    cout << "Step 2: Enter weight\n" << "Pounds:\n";
    cin >> weight;
    //12 in = 1 foot
    inch = feet * 12 + inch;
    //BMI = (weight in pounds * 703) / (height in inches)2
    num = weight * 703;
    denom = inch*inch;
    BMI = num/denom;
    cout << fixed;
    cout << setprecision(1);
    if (BMI > 29.9)
    {
        cout << "BMI: " << BMI << ", you are obese.\n";
    }
    else if (BMI <= 29.9 && BMI >=25.0)
    {
        cout << "BMI: " << BMI << ", you are overweight.\n";
    }
    else if (BMI < 25.0 && BMI >=18.5)
    {
        cout << "BMI: " << BMI << ", you are normal.\n";
    }
    else
    {
        cout << "BMI: " << BMI << ", you are underweight.\n";
    }
    return 0;
}
