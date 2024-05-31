
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter the concentration of solution 1 > ";
    double concentration1;
    cin >> concentration1;
    cout << "Please enter the concentration of solution 2 > ";
    double concentration2;
    cin >> concentration2;
    cout << "Please enter the desired concentration > ";
    double desiredConcentration;
    cin >> desiredConcentration;
    cout << "Please enter the final volume > ";
    double finalVolume;
    cin >> finalVolume;

    double volumeConcentration1 = ((desiredConcentration * finalVolume) - (concentration2 * finalVolume)) / (concentration1 - concentration2);
    double volumeConcentration2 = finalVolume - volumeConcentration1;

    cout << "You should use " << volumeConcentration1 << " units of solution 1 and " << volumeConcentration2 << " units of solution 2" << endl;



}


