#include <iostream>
using namespace std;

int main() {
  int evensum = 0;
  int oddsum = 0;
  for(int i=0; i<=100; i++){
    if(i%2 == 0){
      evensum = evensum + i;
      cout<< evensum << " even";
      cout<<endl;
    }else{
      oddsum = oddsum+i;
      cout<< oddsum << " odd";
      cout<<endl;
    }
  }
  cout  << "evensum = " << evensum;
  cout << endl;
  cout << "oddsum = " << oddsum;
}
