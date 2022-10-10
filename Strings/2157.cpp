#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int C;
    ll B, E;
    vector<string> result, origin;
    string nrev, rev;
    cin >> C;

    for(int i = 0; i < C; i++){
        cin >> B;
        cin >> E;
        for(ll j = B; j<=E; j++ ){
            nrev += to_string(j);
        }
        origin.push_back(nrev);
        reverse(nrev.begin(), nrev.end());
        result.push_back(nrev);
        nrev.clear();
    }

    for(int i = 0; i < result.size(); i++){
        cout << origin.at(i)<<result.at(i) << endl;
    }

    return 0;
}