#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CM_PER_INCH 2.54
#define INCH_PER_FOOT 12
#define CM_PER_FOOT 30.48
#define CM_PER_YARD 91.44
#define CM_PER_MILE 1609.34

int main(int argc, char *argv[])
{
    // Declare variables
    char unit_from[10];
    char unit_to[10];
    double value;
    double result;

    // Get the input
    printf("Enter a value: ");
    scanf("%lf", &value);
    printf("Enter the unit of measurement: \n");
    printf("(cm, inch, foot, yard, mile): ");
    scanf("%s", unit_from);
    printf("Enter the unit of measurement to convert to: \n");
    printf("(cm, inch, foot, yard, mile): ");
    scanf("%s", unit_to);

    // Convert the value
    if (strcmp(unit_from, "cm") == 0)
    {
        if (strcmp(unit_to, "cm") == 0)
        {
            result = value;
        }
        else if (strcmp(unit_to, "inch") == 0)
        {
            result = value / CM_PER_INCH;
        }
        else if (strcmp(unit_to, "foot") == 0)
        {
            result = value / CM_PER_FOOT;
        }
        else if (strcmp(unit_to, "yard") == 0)
        {
            result = value / CM_PER_YARD;
        }
        else if (strcmp(unit_to, "mile") == 0)
        {
            result = value / CM_PER_MILE;
        }
    }
    else if (strcmp(unit_from, "inch") == 0)
    {
        if (strcmp(unit_to, "cm") == 0)
        {
            result = value * CM_PER_INCH;
        }
        else if (strcmp(unit_to, "inch") == 0)
        {
            result = value;
        }
        else if (strcmp(unit_to, "foot") == 0)
        {
            result = value / INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "yard") == 0)
        {
            result = value / INCH_PER_FOOT / INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "mile") == 0)
        {
            result = value / INCH_PER_FOOT / INCH_PER_FOOT / INCH_PER_FOOT;
        }
    }
    else if (strcmp(unit_from, "foot") == 0)
    {
        if (strcmp(unit_to, "cm") == 0)
        {
            result = value * CM_PER_FOOT;
        }
        else if (strcmp(unit_to, "inch") == 0)
        {
            result = value * INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "foot") == 0)
        {
            result = value;
        }
        else if (strcmp(unit_to, "yard") == 0)
        {
            result = value / INCH_PER_FOOT / INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "mile") == 0)
        {
            result = value / INCH_PER_FOOT / INCH_PER_FOOT / INCH_PER_FOOT;
        }
    }
    else if (strcmp(unit_from, "yard") == 0)
    {
        if (strcmp(unit_to, "cm") == 0)
        {
            result = value * CM_PER_YARD;
        }
        else if (strcmp(unit_to, "inch") == 0)
        {
            result = value * INCH_PER_FOOT * INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "foot") == 0)
        {
            result = value * INCH_PER_FOOT * INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "yard") == 0)
        {
            result = value;
        }
        else if (strcmp(unit_to, "mile") == 0)
        {
            result = value / INCH_PER_FOOT / INCH_PER_FOOT / INCH_PER_FOOT;
        }
    }
    else if (strcmp(unit_from, "mile") == 0)
    {
        if (strcmp(unit_to, "cm") == 0)
        {
            result = value * CM_PER_MILE;
        }
        else if (strcmp(unit_to, "inch") == 0)
        {
            result = value * INCH_PER_FOOT * INCH_PER_FOOT * INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "foot") == 0)
        {
            result = value * INCH_PER_FOOT * INCH_PER_FOOT * INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "yard") == 0)
        {
            result = value * INCH_PER_FOOT * INCH_PER_FOOT * INCH_PER_FOOT;
        }
        else if (strcmp(unit_to, "mile") == 0)
        {
            result = value;
        }
    }

    // Print the result
    printf("%.2f %s = %.2f %s\n", value, unit_from, result, unit_to);

    return 0;
}