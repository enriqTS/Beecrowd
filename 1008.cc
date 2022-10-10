#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int id, h;
    long double hp, resp;

    cin >> id >> h >> hp;

    resp = (h * hp);

    cout << setprecision(2) << fixed;
    cout << "NUMBER = " << id << endl;
    cout << "SALARY = U$ " << resp << endl;
}