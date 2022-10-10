#include <string>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

    std::string p;
    std::cin >> p;

    if(p.size() >= 10){
        std::cout << "palavrao" << std::endl;
    }else{
        std::cout << "palavrinha" << std::endl;
    }

    return 0;
}