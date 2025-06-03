ifndef MATHS_H
#define MATHS_H
namespace maths{
    int add(int a, int b){
        return a +b;
    }
    int sub(int a, int b){
        return a - b;
    }
    int mul(int a, int b){
        return a * b;
    }
    int div(int a, int b){
        if(b == 0){
            throw std::invalid_argument("Division by zero");
        }
        return a / b;
    }
    double sqrt(double a){
        if(a < 0){
            throw std::invalid_argument("Square root of negative number");
        }
        return std::sqrt(a);
    }
    double pow(double base, double exp){
        return std::pow(base, exp);
    }
}