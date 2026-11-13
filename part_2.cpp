#include <iostream>
#include <limits>

int main(){

    
//Maxinmun and minimum value is as the following variables

    std::cout << "Short max is: " << std::numeric_limits<short> ::max() << std::endl;
    std::cout << "Short min is: " << std::numeric_limits<short> ::min() << std::endl;

    std::cout << "unsigned Short max is: " << std::numeric_limits<unsigned short> ::max() << std::endl;
    std::cout << "unsigned Short min is: " << std::numeric_limits<unsigned short> ::min() << std::endl;

    std::cout<<"************************** Value greater than its limit **************************"<< std::endl;
    
    short for_finding_max = 134886515655;
    short for_finding_min = -515649659235;
    unsigned short unsign_for_max = 534686941618;
    unsigned short unsign_for_min = -65688489156;

    std::cout << "short max: " << for_finding_max << std::endl; 
    std::cout << "short min: " << for_finding_min << std::endl; 

    std::cout << "unsigned short max: " <<unsign_for_max << std::endl; 
    std::cout << "unsigned short min: " << unsign_for_min << std::endl; 

    return 0;
}