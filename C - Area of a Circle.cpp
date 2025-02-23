#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const long double pi =3.14159;
    long double r;
    cin >> r;
    long double area = pi* (r * r);

    cout << fixed << setprecision(4)<<"A="<< area << endl;
    return 0;
}