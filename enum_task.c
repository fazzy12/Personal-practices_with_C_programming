//challenge 

// create a program that defines  Enum type and uses that typr to display the value of some variables.
// Author: ifeanyi kalu.

// The code defines an enum type called company and then defines two variables of that type.
// The first variable is xex which has the value of xerox, and the second variable is goog which has the value of google.
// Then it prints out some values using printf().
// The code defines an Enum type and uses that type to display the value of some variables.

#include <stdio.h>

int main()
{
    enum company {google, facebook, xerox, yahoo, ebay, microsoft};

    enum company xex, goog, eb;

    xex = xerox;

    goog = google;

    eb = ebay;

    printf("the value of %d is:  xerox\n", xex);
    printf("the value of %d is:  google\n", goog);
    printf("the value of %d is:  ebay\n", eb);

    return 0;
}