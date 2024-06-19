#include <iostream>
 
float studentsMark[5]={0.0}; //globalArray
 
int main() {
  studentsMark[0]=11.0;
  studentsMark[1]=19.0;
  studentsMark[2]=15.0;
  studentsMark[3]=14.0;
  studentsMark[4]=13.0;

  float markSum = 0;
  for(int count = 0; count < 5; count++){
    markSum = markSum + studentsMark[count];
  }
  std::cout<< "Avarage mark = " << markSum/5.0;
  return 0;
}
