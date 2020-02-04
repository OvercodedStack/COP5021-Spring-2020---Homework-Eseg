
void test_my_pointer(int *c){
    int a, *b; 
    if (c == 1){ //This code will not be activated
        c = a /( (a / a) -1);
        *b = 0x0000;
        printf("My incorrect number: %d", c);
    }else //This code will be printed. 
    {
        printf("I don't have errors.");
    }

}


int main () {
    int  a;
    a = 100;   
    test_my_pointer(23);   

    return 0; 
}