#include <iostream>
#include <iomanip>

int main(){

    float pi_f = 3.146546513111684414146214;
    double pi_d = 3.146546513111684414146214;
    long double pi_ld = 3.146546513111684414146214L;

    std::cout << std::setprecision(100);

    std::cout << "float pi_f : " << pi_f << std::endl; 
    std::cout << "double pi_d : " << pi_d << std::endl; 
    std::cout << "long double pi_ld : " << pi_ld << std::endl; 
    return 0;
}