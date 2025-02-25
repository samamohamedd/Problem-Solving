#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double radius;
    double area;
    double pi = 3.14159;

    cin >> radius;

    area = pi * pow(radius, 2);

    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}