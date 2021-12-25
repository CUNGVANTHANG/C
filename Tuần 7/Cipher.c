char* cipher (int k, char* message){
    for(int i = 0; i < strlen(message); i++){
        if(message[i] <= '9' && message[i] >= '0') {
            int y = k;
            while( y > 10) y -= 10;
            int x = message[i] + y;
            if(x > '9') message[i] = x - 10;
            else message[i] = x;
        }
        else if(message[i] >= 'A' && message[i] <= 'Z') {
            int y = k;
            while(y > 26) y -= 26;
            int x = message[i] + y;
            if(x > 'Z') message[i] = x - 26;
            else message[i] = x;
        }
        else if(message[i] >= 'a' && message[i] <= 'z') {
            int y = k;
            while(y > 26) y -= 26;
            int x = message[i] + y;
            if(x > 'z') message[i] = x - 26;
            else message[i] = x;
        }
    }
    return message;
}    
