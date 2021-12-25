double pdf(double x, double mu, double sigma){
     double A = 1/(sigma*sqrt(2*3.14))*exp(-((x-mu)*(x-mu))/(2*sigma*sigma));
     
     return A;
}
