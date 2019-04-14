double myPow(double x, int n) {
    
    if(n == 0) return 1;
    double temp = (n < 0) ? (1/x) : x, temp2 = 1;
    
    if(n == 1 || n == -1) return temp;
    
    if(n % 2 == 1 || n % 2 == -1) temp2 = temp;
    
    temp = myPow(temp, (n < 0) ? ((n/2)*-1) : n/2);
    temp = temp * temp * temp2;
    return temp;
}