#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long double id1, qu1, pu1, id2, qu2, pu2, sum;

    cin >> id1 >> qu1 >> pu1 >> id2 >> qu2 >> pu2;

    sum = qu1*pu1 + qu2*pu2;

    cout << setprecision(2) << fixed;
    cout << "VALOR A PAGAR: R$ " << sum << endl;    

    return 0;
}