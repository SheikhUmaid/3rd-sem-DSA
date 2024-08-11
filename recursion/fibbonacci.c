#include <stdio.h>




int fibbo(int n){
    int a = 0;
    int b = 1;

    if(n == 0)
    return 0;
    if(n==1)
    return 1;

    return fibbo(n-1) + fibbo(n-2);


}

int main(int argc, char const *argv[])
{
    
    printf("%d", fibbo(20));

        return 0;
}
