//Trapazoidal
#include<iostream>
using namespace std;
float y(float x){
    return 1/(1+x*x);
}
float trapezoidal(float a, float b, float n){
    float h = (b-a)/n;
    float s = y(a)+y(b);
    for(int i = 1; i<=n; i++){
        s+= 2*y(a+i*h);
        cout<<"\nS"<<i<<"="<<y(a+i*h);
    }
    return(h/2)*s;
}
int main(){
    float x0=0;
    float xn=1;
    int n = 6;
    cout<<"\nValue of integral is"<<trapezoidal(x0,xn,n);
    return 0;
}
