#include <stdio.h>

int main()
{
    int running = 1;
    while(running)
    {
    char unit = 'A';

    printf("\nWhat temperature are you converting from?");
    printf("\n1. Celsius");
    printf("\n2. Fahrenheit");
    printf("\n3. Kelvin\n");

    int choice = 0;
    while (choice == 0)
    {
        printf("\nEnter choice (1/2/3): ");
        scanf("%d", &choice);
        
        if (choice != 1 && choice != 2 && choice != 3)
        {
            printf("\nInvalid input. Please enter 1, 2, or 3.\n");
            choice = 0;
        } else
        {
            printf("\nYou have chosen option %d\n", choice);
            break;
        }
        
    }
    
    printf("\nWhat temperature are you converting to?");
    printf("\n1. Celsius");
    printf("\n2. Fahrenheit");
    printf("\n3. Kelvin\n");
    
    int choice2 = 0;
    while (choice2 == 0)
    {
        printf("\nEnter choice (1/2/3): ");
        scanf("%d", &choice2);
        if (choice2 != 1 && choice2 != 2 && choice2 != 3)
        {
            printf("\nInvalid input. Please enter 1, 2, or 3.\n");
            choice2 = 0;
        } else
        {
            printf("\nYou have chosen option %d\n", choice2);
            break;
        }
        
    }

    double temperature = 0.0;
    printf("\nEnter temperature: ");
    scanf("%lf", &temperature);

    if (choice == choice2)
    {
        printf("\nYou have put in the same unit to convert from and to, the resulting temperature is the same: %.2lf\n", temperature);
        return 0;
    }
    

    switch (choice)
    {
    case 1: // Celsius
        switch (choice2)
        {
        case 2: // to Fahrenheit
            temperature = (temperature * 9.0 / 5.0) + 32.0;
            unit = 'F';
            break;
        case 3: // to Kelvin
            temperature = temperature + 273.15;
            unit = 'K';
            break;
        break;
        }
    break;

    case 2: // Fahrenheit
        switch (choice2)
        {
        case 1: // to Celsius
            temperature = (temperature - 32.0) * 5.0 / 9.0;
            unit = 'C';
            break;
        case 3: // to Kelvin
            temperature = (temperature - 32.0) * 5.0 / 9.0 + 273.15;
            unit = 'K';
            break;
        break;
        }
    break;

    case 3: // Kelvin
        switch (choice2)
        {
        case 1: // to Celsius
            temperature = temperature - 273.15;
            unit = 'C';
            break;
        case 2: // to Fahrenheit
            temperature = (temperature - 273.15) * 9.0 / 5.0 + 32.0;
            unit = 'F';
            break;
        break;
        }
    break;

    default:
        printf("An error occurred.\n");
        break;
    }

    printf("Converted temperature: %.2lf %c\n", temperature, unit);
    printf("Do you want to perform another conversion? (1 for Yes / 0 for No): ");
    scanf("%d", &running);
    if (running != 1)
    {
        running = 0;
        printf("Exiting the program.\n");
    }
}
return 0;
}