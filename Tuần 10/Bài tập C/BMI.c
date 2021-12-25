struct Person{
    double height;
    double weight;
};

double getBMI (struct Person person){
    return person.weight/ (person.height*person.height);
}
