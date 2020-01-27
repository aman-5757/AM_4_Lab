//Simpson's 1/3
#include<iostream>
using namespace std;
float y(float x){
    return 1/(1+x*x);
}
float simpsons(float a, float b, float n){
    float h = (b-a)/n;
    float s = 0;
    for(int i = 0; i<=n; i++){
        if(i == 0 || i==n){

             s+= y(a+i*h);
        }
        else if(i%2!=0){
            s+= 4*y(a+i*h);
        }
        else{
            s+= 2*y(a+i*h);
        }
        cout<<"\nS"<<i<<"="<<y(a+i*h);
    }
    return(h/3)*s;
}
int main(){
    float x0=0;
    float xn=1;
    int n = 6;
    cout<<"\nValue of integral is"<<simpsons(x0,xn,n);
    return 0;
}
