#include <iostream>
#include <math.h>

using namespace std;

double f(double x){
    return x;
}

double Simpson (double a, double b, int n){
    double deltaX = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i <= n - 1; i++){
        if (i % 2 == 0){
            sum += 2 * f(a + i * deltaX);
        }
        else {
            sum += 4 * f(a + i * deltaX);
        }
    }
    sum *= deltaX / 3;
    return sum; 
}

int main(){
    double a, b; cin >> a >> b;
    int n; cin >> n;
    if (n % 2 == 1){
        cout << "the number n must be an even number";
    }
    else {
        cout <<  Simpson(a, b, n);
    }
}