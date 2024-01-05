#include <iostream>
#include <string>
int main(){
  
  std::string alpha = "abcdefghijklmnopqrstuvwxyz";

  std::cout << "Put in value: ";

  int change = 0;
  std::cin >> change;

  std::cout << std::endl << "input: ";
  std::string input;
  std::cin >> input;


  for(int i =0; i<input.length(); i++){
    
    for(int j = 0; j<alpha.length(); j++){
      if(input[i] == alpha[j]){
        std::cout << alpha[(i+change)%alpha.length()];
        
      }
    }


  }

  
  
  

  
  


  return 0;
}
