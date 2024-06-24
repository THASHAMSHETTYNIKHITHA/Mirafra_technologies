#include <stdio.h>
int main()
{
    static float i=10;
    if(--i){
        main();
        printf("%f",i);
    }

}
