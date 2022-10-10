#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long double sf, resp;
    int dis;

    cin >> dis >> sf;

    resp = dis/sf;

    cout << setprecision(3) << fixed;
    cout << resp << " km/l" << endl;

    return 0;
}