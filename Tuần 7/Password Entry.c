unsigned int getCorrectResponse(unsigned int pin, unsigned int num){
    int i ,  a[100], b[100], S =0;
    int mk=0;
    unsigned int pin1 = pin;
    while(pin1!=0){
        pin1 = pin1/10;
        S++;
    }
    for(i=0;i<S;i++){
        a[S-1-i]= pin %10;
        pin = pin/10;
    }
    for(i=0;i<10;i++){
        b[9-i] = num%10;
        num = num/10;
    }
    for(i=0;i<S;i++){
        mk = mk*10 + b[a[i]];
    }
    return mk;
}
