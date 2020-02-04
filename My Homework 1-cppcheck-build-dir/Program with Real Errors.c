
int test_my_failures(){
    int my_favorite_number = 5; 
    int number_i_dislike = 6;
    int a_dissolved_number = 0;
    unsigned long *p = 0;
    int counter =0; 
    int var =0;
    var = &var + *p; 

  while (counter == 0){
        *p = (32658 * 32658) + *p;
        var = *p +0x0001000F; 
    }
    
    if (my_favorite_number > 7){
        return (my_favorite_number / my_favorite_number ) - 1;
    }else{ //Divide by zero error. 
        a_dissolved_number = number_i_dislike / ((number_i_dislike/number_i_dislike) - 1); 
    }

    return my_favorite_number;
}



int main(){  
    return test_my_failures(); 
}