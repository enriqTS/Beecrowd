#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long double a, b, c, area, pi;
    pi = 3.14159;

    cin >> a >> b >> c;

    area = (a*c)/2.0;

    cout << setprecision(3) << fixed;
    cout << "TRIANGULO: " << area << endl;

    area = pi*(c*c);

    cout << "CIRCULO: " << area << endl;

    area = ((a+b)*c)/2;

    cout << "TRAPEZIO: " << area << endl;

    area = b*b;

    cout << "QUADRADO: " << area << endl;

    area = a*b;

    cout << "RETANGULO: " << area << endl;

    return 0;
}