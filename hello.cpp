//c++ function to calculate volume of a cylinder
#include <iostream>
#include <cmath> // for M_PI
using namespace std;

    double calculatecylindervolume(double radius, double height) {
        double volume = M_PI * radius * radius * height;
        return volume;
    }
    
int main() {
    double radius, height;
    
    //prompt user to enter radius
    cout <<"Enter the radius: ";
    cin >> radius;
    
    //prompt user to enter height
    cout <<"Enter the height: ";
    cin >> height;
    
    //calculate and display the volume
    double volume = calculatecylindervolume(radius, height);
    cout <<"The volume of cylinder is: " << volume << endl;
    return 0;
}
