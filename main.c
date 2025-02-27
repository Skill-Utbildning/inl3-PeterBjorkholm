#include <stdio.h>
#include <math.h>

/* ------- Solution starts here ----------*/

float calculate_hypotenuse(float a, float b){
    float a2 = pow(a,2);
    float b2 = pow(b,2);
    float h = sqrt(a2+b2);
    return h;
}

/* ------- Solution ends here ------------*/


// This is where you add the function calculate_hypotenuse

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}