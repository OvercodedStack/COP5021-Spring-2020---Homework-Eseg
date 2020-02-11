#include <stdio.h>
int main(){
    int *x;

    int val = 10;
    bool bat = true;
    while (true){
        if (bat){
            break;

        }else{//Will never be reached and thus false alarm.
            x = nullptr;
            printf("My reference is : %p", x);
        }
    }

    return val;
}

