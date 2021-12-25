#include <stdio.h>

int main(){
    int a[100][100];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++) scanf("%d", &a[i][j]);
    }
    int n, in, jn;
    int dem = 0;
    scanf("%d %d %d", &n, &in, &jn);
    if((in <= 9 && in >= 0) && (jn <= 9 && jn >= 0)){
        if(a[in - 1][jn - 1] == 0) dem += 1;
        for(int i = 0; i < 9; i++){
            if(a[in - 1][i] == n) dem += 1;
        }
        for(int i = 0; i < 9; i++){
            if(a[i][jn - 1] == n) dem += 1;
        }
        int x = in % 3;
        int y = jn % 3;
        switch (x)
        {
        case 0:
            switch (y)
            {
            case 0:
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;

            case 1:
                jn = jn - 1;
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                    if(a[i][j] == n) dem += 1;
                    }
                }
                break;
        
            case 2:
                jn = jn - 2;
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;
            }
            break;

        case 1:
            in = in - 1;
            switch (y)
            {
            case 0:
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;

            case 1:
                jn = jn - 1;
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;
        
            case 2:
                jn = jn - 2;
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;
            }
            break;

        case 2:
            in = in - 2;
            switch (y)
            {
            case 0:
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;

            case 1:
                jn = jn - 1;
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                    if(a[i][j] == n) dem += 1;
                    }
                }
                break;
        
            case 2:
                jn = jn - 2;
                for(int i = in; i < in + 3; i++){
                    for(int j = jn; j < jn + 3; j++){
                        if(a[i][j] == n) dem += 1;
                    }
                }
                break;
            }
            break;
    }
    if(a[in - 1][jn - 1] == n) dem = 1;
    if(n >= 1 && n <= 9){
        if(dem != 1) printf("Invalid place.");
        else printf("Valid place.");
    }
    else printf("Invalid number.");
    }
    else printf("Invalid place.");
    return 0;
}
