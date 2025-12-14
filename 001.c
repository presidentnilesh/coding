#include <stdio.h>

int main(){
    int arr[5]={10 , 20 ,30 ,40 ,50} ;
    int* p=arr ;

    printf("the initial value of pointer is : %d \n" , *p) ;
    p++ ;    // increment 
    printf("the value of p will be : %d \n" , *p) ;
    p=p+2 ;  //increment by 2
    printf("the value of p will be : %d \n" , *p) ;
    return 0 ;
    
}