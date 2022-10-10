#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    long double a, n, r;
    n = 3.14159;

    cin >> r;
    
    a = n * (r*r);

    cout << std::setprecision(4) << fixed;
    cout << "A=" << a << endl;
 
    return 0;
}