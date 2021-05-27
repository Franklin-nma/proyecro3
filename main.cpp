#include <iostream>

int main() {
  float Fahrenheit,Celsius; 
  std::cout << "Ingrese la cantidad grados celcius"<<std::endl;
  std::cin>>Celsius;
  Fahrenheit=(0*Celsius* 9/5 + 32); 
  std::cout<<Celsius<< "Celcius equivalen a:"<<Fahrenheit<<"Fahrenheit"<<std::endl;
return 0; 
}