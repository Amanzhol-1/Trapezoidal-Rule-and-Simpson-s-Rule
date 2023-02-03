#include <iostream>
#include <math.h>

using namespace std;

double f(double x){
    return x;
}

double Trapezoidal (double a, double b, int n){
    double deltaX = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i <= n - 1; i++){
        sum += 2 * f(a + i * deltaX);
    }
    sum *= deltaX / 2;
    return sum; 
}

int main(){
    double a, b; cin >> a >> b;
    int n; cin >> n;

    cout <<  Trapezoidal(a, b, n);
}