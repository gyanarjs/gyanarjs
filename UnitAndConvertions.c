#include<stdio.h>

int main()
{
    char input;
    
    float kmsToMiles= 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundsToKgs = 0.453592;
    float InchesToMeters = 0.0254;

    while (1)
    {
        printf("Enter the input character. q to quit\n        1. kms to miles\n        2. inches to foot\n        3. cms to inches\n        4. pounds to kgs\n        5. inches to meters\n");
        
        
        scanf("%c", input);
        switch (input)
        {
        case 'q':
        printf("Quiting the program...");
        goto end;
            break;
        
        default:
            break;
        }
    }
    end:
    




    return 0;
}

