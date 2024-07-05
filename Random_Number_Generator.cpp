#include <iostream>

int main(){
    // pseudo-random = NOT truely random (but close)

    srand(time(NULL));

    int num1 = (rand() % 400 ) + 1;
    if(num1 == 400){
        std::cout << "You Dropped NECRONS HANDLE";
    }
    else if(num1 == 100 || 300){
        std::cout << "You got a Scroll";
    }
    else{
        std::cout << "tough luck, no rng :( ";
    }

    return 0;
}