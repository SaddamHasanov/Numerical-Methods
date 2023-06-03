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
    double n = 50; // Number of rectangels
    double xn;
    
    do{
        cout << "Enter starting point : ";
        cin >> x0;
        cout << "Enter end point : ";
        cin >> xn;
    }while(x0 >= xn);
    
    double x = x0; 
    double h = (xn - x0) / n;
    double result = 0;
    int i = 1;
    
    while (x < xn){
        x = x0 + i * h/2;
        result += h * func(x);
        if(x >= xn){
            break;
        }
        cout << fixed << setprecision(8) << result << endl;
        i += 2;
    }
    
    return 0;
}