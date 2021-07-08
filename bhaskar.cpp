
#include <iostream>
#include <math.h>

int main(void){
    int a;
    int b;
    int c;
    int x;

    std::cout<<"Type the a: ";
    std::cin>>a;

    std::cout<<"\nType the b: ";
    std::cin>>b;

    std::cout<<"\nType the c: ";
    std::cin>>c;

    float baskara = a*x*x + b*x + c;
    float totalPos = (-b + sqrt(b*b - (4*a*c)))/2*a;
    float totalNeg = (-b - sqrt(b*b - (4*a*c)))/2*a;

    std::cout<<"\nThe asnwer is "<<totalPos<<" or "<<totalNeg<<"\n";
}
