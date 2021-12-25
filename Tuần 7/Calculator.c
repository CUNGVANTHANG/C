float calculate (float num1, char operator, float num2){
    if(operator=='+'){
        return num1+num2;
    }
    else if(operator=='-'){
       return num1-num2;
    }
    else if(operator=='*'){
        return num1*num2;
    }
    else if(operator=='/'){
        return num1/num2;
    }
}
