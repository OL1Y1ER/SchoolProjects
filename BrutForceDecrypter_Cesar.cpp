#include <iostream>
#include <string>


int main(){
    std::string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz.,?!_1234567890";

    std::string input;
    std::cin >> input;

    int settOff = 0;
    while(settOff <= alpha.length()){
        for(int i =0; i < input.length(); i++){
            for(int j =0; j < alpha.length(); j++){
                if(input[i] == alpha[j]){
                    std::cout << alpha[(settOff + (j+1))%alpha.length()];
                }
            }
        }
        std::cout << std::endl;
        settOff++;
    }
    


    return 0;
}