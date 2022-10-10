#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long double x1, y1, x2, y2, resp;
    cin >> x1 >> y1 >> x2 >> y2;

    resp = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout << setprecision(4) << fixed;
    cout << resp << endl;

    return 0;
}