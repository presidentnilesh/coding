// #include <stdio.h>
// #include<stdlib.h>

// int main(){
// int *p ;

// //malloc
// p=(int*)malloc(5*sizeof(int)) ;

// p[0]=10 ;
// p[1]=20 ;
// p[2]=30 ;
// p[3]=40 ;
// p[4]=50 ;

// // realloc
// p=(int*)realloc(p ,3*sizeof(int)) ;

// //calloc
// int *q=(int*)calloc(5 , sizeof(int)) ;



// printf("the value of p after realloc is :%d \n" , p[2]) ;
//     return 0 ;
// }


// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//  int*p ;
//  p=(int*)malloc(5*sizeof(int)) ;

//  for(int i=0 ; i<5 ;i++){
//     p[i]=i+1 ;
//     printf("the value at index %d is : %d \n" , i , p[i]) ;
//  }
//     return 0 ;
// }

// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//  int*p ;
//  p=(int*)calloc(5 ,sizeof(int)) ;

//  for(int i=0 ; i<5 ;i++){
//     p[i]=i+1 ;
//     printf("the value at index %d is : %d \n" , i , p[i]) ;
//  }
//     return 0 ;
// }


#include <stdio.h>
#include<stdlib.h>
int main(){
 int*p ;
 p=(int*)malloc(5*sizeof(int)) ;

 for(int i=0 ; i<5 ;i++){
    p[i]=i+1 ;
 }
 p=(int*)realloc(p,5*sizeof(int));
 p[3]=56 ;
 p[2]=34 ;
 
 for(int i=0 ;i<5 ;i++){
    printf("the value at index %d is : %d \n" , i , p[i]) ;
 }

 free(p) ;
    return 0 ;
}