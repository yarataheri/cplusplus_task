#include <iostream>
#include <cmath>

int main(){

    bool student = true;
    student ? std::cout<<"They are student" : std::cout<<"They are not student" << std::endl;
    int student_ID = 554474;
    std::cout<<"Their student ID is: " << student_ID << std::endl;
    char grade = 'A';
    std::cout<<"The student grade is "<<grade <<std::endl;



    double grade_calculator; std::cout<< "Enter your grade between 0-20: ";
    std::cin>>grade_calculator;
    float grade_in_percent; 
    grade_in_percent = (grade_calculator * 100.0) / 20.0;
    std::cout<<"Dear student, your grade is " << grade_in_percent << "%"<<std::endl;

//******************************************************************************* */
    std::string question;
    std::cout<<"Now moving forward, Type something to see some types of data :) ";
    std::cin>>question;
    
    wchar_t wide_char = L'Y';
    char16_t sixteen_char = u'Y';
    char32_t thirty_two_char = U'Y';

/*Designed to store a UTF-32 code unit.
Its size is always 4 bytes.
The U prefix identifies a UTF-32 character literal.*/

    short not_long = 111;
/*Stores whole numbers.
Usually uses 2 bytes (16 bits).
It can store negative and positive numbers.*/

    unsigned short not_signed_not_long = 555;
/*
- Usually uses 2 bytes.
- Cannot store negative numbers.
- Its typical range is: 0 to 65,535*/

    unsigned int not_sign_inte = 1010;

/*- Usually uses 4 bytes (32 bits).
- Stores only zero and positive whole numbers.
- Typical range: 0 to 4,294,967,295*/

    long not_short = 1020304;

/*Stores whole numbers.
Can represent negative and positive numbers.
Its size depends on the platform.*/

    unsigned long not_sign_not_long = 2000002;

/*Cannot store negative numbers.
Usually 4 bytes on Windows.
Usually 8 bytes on 64-bit Linux.*/

    long long two_not_short = 9000000000LL;

/*Stores large whole numbers.
Uses at least 8 bytes (64 bits).
Can store negative and positive values.
its minimum and maximun value is +-9,223,372,036,854,775,808*/

    unsigned long long not_sign_two_not_short = 18000000000ULL;

/*Uses at least 8 bytes.
Stores only zero and positive whole numbers.*/


    long double far_doble = 3.141592653589793238L;
/*Stores decimal numbers.
Designed to provide at least as much precision as double.
Its size and precision depend on the compiler and platform.*/

    std::cout << "wchar_t: " << sizeof(wide_char) << " bytes"<< std::endl;
    std::cout << "char16_t: " << sizeof(sixteen_char) << " bytes" << std::endl;
    std::cout << "char32_t: " << sizeof(thirty_two_char) << " bytes" << std::endl;

    std::cout << "short: " << sizeof(not_long) << " bytes"<< std::endl;
    std::cout << "unsigned short: " << sizeof(not_signed_not_long) << " bytes"<< std::endl;

    std::cout << "unsigned int: " << sizeof(not_sign_inte) << " bytes"<< std::endl;

    std::cout << "long: " << sizeof(not_short) << " bytes"<< std::endl;
    std::cout << "unsigned long: " << sizeof(not_sign_not_long) << " bytes"<< std::endl;

    std::cout << "long long: " << sizeof(two_not_short) << " bytes"<< std::endl;
    std::cout << "unsigned long long: " << sizeof(not_sign_two_not_short) << " bytes"<< std::endl;

    std::cout << "long double: " << sizeof(far_doble) << " bytes"<< std::endl;



    return 0;
}