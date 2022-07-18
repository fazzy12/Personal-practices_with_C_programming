// display parameter and area of a rectangle

// The code is a program that asks the user to enter two values for width and height.
// The program then calculates the perimeter of a rectangle with those two dimensions.
// The code is an example of how to use the printf() function in C. The code displays the perimeter and area of a   rectangle given two parameters, width and height.

// AUTHOR: ifeanyi kalu

#include <stdio.h>

int main()
{

    double width = 2.59, height = 5.76, perimeter = 0.0, area = 0.0;


        perimeter =  (width + height) * 2.0 ;
        area = (width * height);


        printf("perimeter: %lf, area: %lf\n", perimeter, area);



        return 0;



}