#include <bits/stdc++.h>
#include <iomanip>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string name;
    double sl, vs, resp, percent;

    cin >> name >> sl >> vs;

    resp = sl + (vs/100)*15;

    cout << setprecision(2) << fixed;
    cout << "TOTAL = R$ " << resp << endl;

    return 0;
}