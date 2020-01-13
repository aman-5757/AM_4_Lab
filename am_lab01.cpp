//Aim: To find roots of following equation using Newton-Raphson Method.
#include<iostream>
#include<cmath>

#define EPSILON 0.001
using namespace std;
double function(double x){
    return x*x*x -2*x-5;
}
double deriv_func(double x){
    return 3*x*x-2;

}
//function to find the root
double newtonRaphson(double x){
    double h = function(x)/deriv_func(x);
    while(fabs(h)>=EPSILON)
    {
        h = function(x)/deriv_func(x);
        x=x-h;
    }
    return x;
}
int main(){
    double x0=3, x;
    cout<<"Entered Equation"<<"\n\t x^3-2*x-5=0\n";
    x = newtonRaphson(x0);
    cout<< "The value of the root is: "<<x;
    return 0;

}


