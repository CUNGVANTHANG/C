void printGreeting (struct Greeting newGreet){
    int i;
    for(i=0;i<newGreet.iter;i++){
        printf("%s\n", newGreet.greet);
    }
}
