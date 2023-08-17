/*This code Takes Two numbers As marks and display The Sum and Averange
                
---------------------------------------------------------------------------   */

# include <stdio.h>
 int main()
 {
    //Declearing the Varables
    int mark1,mark2,sum;
    float avg;
    

    // taking user inputs through the keyboard
    printf("Enter Mark 1: ");   
    scanf("%d",&mark1);
    printf("Enter Mark 2: ");
    scanf("%d",&mark2);

    //calculation Parts
    sum = (mark1+mark2)/2 ;
    avg= sum/2;

    //Printing the Sum and Averange
    printf("\nYour Total Mark is : %d\n",sum);
    printf("Your Averange Mark is : %.2f\n",avg);
    
    return 0;

 }
