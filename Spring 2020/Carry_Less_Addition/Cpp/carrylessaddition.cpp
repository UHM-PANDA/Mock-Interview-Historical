#include "carrylessaddition.hpp"

int carry_less_addition(int a, int b){
    int rans;
    
    int temp1 = a;
    int temp2 = b;

    int lsb_1 = temp1 % 10;
    int lsb_2 = temp2 % 10;

    if(lsb_1 + lsb_2 > 9){
        rans = (lsb_1 + lsb_2) / 10;
    }
    else{
        rans = lsb_1 + lsb_2;
    }

    temp1 /= 10;
    temp2 /= 10;

    while(temp1 > 0 && temp2 > 0){
        rans *= 10;
        lsb_1 = temp1 % 10;
        lsb_2 = temp2 % 10;

        if(lsb_1 + lsb_2 > 9){
            rans += (lsb_1 + lsb_2) / 10;
        }
        else{
            rans += lsb_1 + lsb_2;
        }

        temp1 /= 10;
        temp2 /= 10;
    }

    if(temp1 == 0){
        while(temp2 > 0){
            rans *= 10;
            rans += temp2 % 10;
            temp2 /= 10;
        }
    }
    else if(temp2 == 0){
        while(temp1 > 0){
            rans *= 10;
            rans += temp1 % 10;
            temp1 /= 10;
        }
    }

    int ans = 0;
    while(rans > 0){
        ans += rans % 10;
        ans *= 10;
        rans /= 10;
    }

    return rans;
}
