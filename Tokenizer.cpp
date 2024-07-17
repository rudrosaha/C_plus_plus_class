#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char myStr[] = "Hi, I m Rudro Saha. From kolkata. Hometown Bangladesh.";
  char *myPtr;

  myPtr = strtok(myStr, ".");
  
  while(myPtr != NULL){ 
    cout<<myPtr<<endl;
    myPtr = strtok(NULL, " ");
  }

  
  return 0;
}
