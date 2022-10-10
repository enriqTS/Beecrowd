#include <bits/stdc++.h>

#define ll             long long int
#define f              first
#define s              second 
#define endl           "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a, resp=0;
    vector<ll> v;
    for(int i=0; i < 3;i++){
        cin >> a;
        v.push_back(a);
    }    

    for(int i = 0; i < 3; i++){
        if(resp<=v.at(i)){
            resp = v.at(i);
        }
    }

    cout << resp << " eh o maior" << endl;

    return 0;
}