// display parameter and are of a rectangle

// The code is a program that asks the user to enter two values for width and height.
// The program then calculates the perimeter of a rectangle with those two dimensions.
// The code is an example of how to use the printf() function in C. The code displays the perimeter and area of a   rectangle given two parameters, width and height.

#include <stdio.h>

int main()
{

    double width = 2.59, height = 5.76, param, area;


        param =  (width + height) * 2.0 ;
        area = (width * height);


        printf("perimeter: %lf, area: %lf\n", param, area);



        return 0;



}