#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    long double a, b, c, resp;
    
    cin >> a >> b >> c;
    
    resp = (a*2 + b*3 + c*5)/10;
    
    cout << setprecision(1) << fixed;
    cout << "MEDIA = " << resp << endl;
    
    return 0;
}