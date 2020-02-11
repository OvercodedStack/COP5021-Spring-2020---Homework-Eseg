class dog{

    friend void can_bark(dog in){
        in.bark();
    };

    public:
    bool is_barking;
    void bark(){
        is_barking = !is_barking;
    }
    

}

#include <stdio.h>

int main(){
    bool my_best_val = true;
    int five = 5; 
    dog pooch; 

    for (int c = 0 ; c < 10; c++){
        if (c == 10){
            can_bark(pooch);
            dog symbol_dea.is_barking = true;
        }
    }


    return 0;
}

