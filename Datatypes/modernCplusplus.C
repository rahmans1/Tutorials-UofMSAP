#include <iostream>
#include <vector>
void printvalues(int i) {
  std::cout<<i<<std::endl;  
  return;
}

void printValues (double i) {
     std::cout << i << std::endl;
     return;          
}

int main(){ 
     
  int number_of_students = 2; 
  int number_of_chairs = 25; // number of chairs in classroom 
  int number_of_benches = 23; // number of benches in the classroom
  long number_of_students_long = 897654325; // number of students long
  short number_of_students_short = 32767; //number of students of data types short

  printvalues(number_of_students); //number of students in class
  printValues(number_of_chairs); //printing the number of chairs

 
  double temperatureNaz[31]; //temperature over a month in a classroom 
  double temperature[31]; // temperature over a month in a classroom
  std::vector<int> climate_vector;
  for (int i=0; i<31; i++){
    temperatureNaz[i]=rand()%10+20;
    temperature[i] = rand() %10 + 20;
    temp_vector.push_back(rand()%10+20);
    std::cout<<"the temperature on day"<<i<<"is"<<temperatureNaz[i]<<std::endl;
    std::cout<<"the temperature on day"<<i<<"is"<<temperature[i]<<std::endl;
    std::cout<<"the temperature on day"<<i<<"from vector is"<<climate_vector[i]<<std::endl;
  }

 
return 0; 
}
