int isCollinear(int x1, int y1, int x2, int y2, int x3, int y3){
    int i;
    if(x1*y2==x2*y1 && x2*y3==x3*y2 || y1==y2 && y2==y3 || x1==x2 && x2==x3){
        return 1;
    }
    else{
        return 0;
    }
}
