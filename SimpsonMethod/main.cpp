#include <iostream>
#include <iomanip>
#include <cmath>

double func(double x){
    double a = 3*pow(x,3) + 2*pow(x,2) - 5;
    return a;
}

using namespace std;
int main(){
    
    double x0; // Starting point
    double n = 50;
    double xn;
    
    do{
        cout << "Enter starting point : ";
        cin >> x0;
        cout << "Enter end point : ";
        cin >> xn;
    }while(x0 >= xn);
    
    double x = x0; 
    double h = (xn - x0) / (2 * n);
    double result = 0;
    int i = 0;
    
    while (x < xn){
        x = x0 + 2*i*h;
        result += h/3 * (func(x) + 4*func(x+h) + func(x+2*h));
        if(x >= xn){
            break;
        }
        cout << fixed << setprecision(8) << result << endl;
        i ++;
    }
    
    return 0;
}