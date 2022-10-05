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

  
  double temperature[31]; // temperature over a month in a classroom
  for (int i=0; i< 31; i++) 
  {
    temperature[i] = rand() %10 + 20;
    // Generates random number between 20 and 30. the first parameter is (30-20)=10.the second parameter is 20.
    
    std::cout<< "The temperature on each day"<<i<<"is"<< temperature[i] << std::endl;
    }
  
return 0; 
}
