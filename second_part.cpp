#include <iostream>
using namespace std;
int main(){
    int grade;
    cout<<"Enter your grade: ";
    cin>>grade;


    if (grade >= 16){
        cout<<"You have passed the exam.";
    }
    else if (grade > 16)
    {
        cout<<"You have not passed the exam";
    }
    else{
        cout <<"Enter a valid number";
    }

    return 0;
}