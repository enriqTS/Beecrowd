#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    long double a, b, resp;
    
    cin >> a >> b;
    
    resp = (a*3.5 + b*7.5)/11;
    
    cout << setprecision(5) << fixed;
    cout << "MEDIA = " << resp << endl;
 
    return 0;
}