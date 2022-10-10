#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long double r, resp, pi;
    pi = 3.14159;

    cin >> r;

    resp = (4.0/3)*pi*r*r*r;

    cout << setprecision(3) << fixed;
    cout << "VOLUME = " << resp << endl;

    return 0;
}