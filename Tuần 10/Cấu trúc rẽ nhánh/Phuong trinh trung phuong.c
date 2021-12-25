#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d;
   
    scanf("%f %f %f", &a, &b, &c);
     d = sqrt(-c/b);
    if(a==0 && b==0 && c== 0){
        printf("phuong trinh co vo so nghiem");
    }
    else if(a==0 && b==0 && c!=0){
        printf("phuong trinh vo nghiem");
    }
    else if(a==0 && b!=0 && c>0){
        printf("phuong trinh vo nghiem");
    }
    else if(a==0 && b!=0 && c<0){
        printf("phuong trinh co 2 nghiem\n%.5f %.5f", -d, d);
    }
    else if(a==0 && b!=0 && c==0){
        printf("phuong trinh co 1 nghiem\n%.5f", c/b);
    }
    else if(a!=0 && b>0 &&  c==0){
        printf("phuong trinh co 1 nghiem\n%.5f", 0/a);
    }
    else if(a!=0 && b<0 && c==0){
        printf("phuong trinh co 3 nghiem\n%.5f %.5f %.5f", -sqrt(-b/a), 0/a, sqrt(-b/a));
    }
    else if(a!=0 && b==0 && c==0){
        printf("phuong trinh co 1 nghiem\n%.5f", 0/a);
    }
    else if(a!=0 && b==0 && c>0){
        printf("phuong trinh vo nghiem");
    }
    else if(a!=0 && b!= 0 && c!= 0){
        int denta = b*b - 4*a*c;
        if(denta<0){
            printf("phuong trinh vo nghiem");
        }
        else{
            float x1 = (-b + sqrt(denta))/(2*a);
            float x2 = (-b - sqrt(denta))/(2*a);
            if(x1 == x2 && x1 == 0){
                printf("phuong trinh co 1 nghiem\n%.5f", 0/a);
            }
            else if( x1 < 0 && x2<0){
                printf("phuong trinh vo nghiem");
            }
            else if(x1 == x2 && x1 > 0 && x2>0){
                printf("phuong trinh co 2 nghiem\n%.5f %.5f", -sqrt(x1), sqrt(x1));
            }
            else if(x1 != x2 && x1> 0 && x2> 0){
                printf("phuong trinh co 4 nghiem\n%.5f %.5f %.5f %.5f", -sqrt(x1), -sqrt(x2), sqrt(x2), sqrt(x1));
            }
            else if( x2==0 && x1>0){
                printf("phuong trinh co 3 nghiem\n%.5f %.5f %.5f", -sqrt(x1), 0/a, sqrt(x1));
            }
            else if(x2< 0 && x1>0){
                printf("phuong trinh co 2 nghiem\n%.5f %.5f", -sqrt(x1), sqrt(x1));
            }
        }
    }
  
}

