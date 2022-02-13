#include <iostream>
#include <cmath>
using namespace std;
int main(){
   
    double area = 0.0;

    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side = 0.0;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet yo the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}