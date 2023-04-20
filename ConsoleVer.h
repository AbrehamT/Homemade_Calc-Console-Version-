class Calculator{
    private:
        long double lhs;
        long double rhs;
    public:
        Calculator();
        Calculator (long double lhs, long double rhs);
        long double sum();
        long double diff();
        long double prod();
        long double qouti();


};

Calculator::Calculator(long double lhs, long double rhs){
    this->lhs = lhs;
    this->rhs = rhs;

}
long double Calculator::sum(){
    return lhs + rhs;
}

long double Calculator::diff(){
    return lhs - rhs;
}

long double Calculator::prod(){
    return lhs * rhs; 
}

long double Calculator::qouti(){
    return lhs / rhs;
}