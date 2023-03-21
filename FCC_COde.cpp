/*
01 / Write a C program to accept two integers and check whether they are equal or not.
02 / Write a C program to check whether a given number is even or odd.
03/ Write a C program to check whether a given number is positive or negative.
04/ Write a C program to find whether a given year is a leap year or not.
05/ Write a C program to find the largest of three numbers.
06/ Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
07/ Write a C program for reading any Month Number and displaying the Month name as a word. Go to the editor
08 / Write a program in C to read any Month Number in an integer and display the number of days for this month. Go to the editor
09 / Write a C program that computes the area of various geometrical shapes (Triangle, Rectangle, and Circle) using a menu-driven approach.
10/ Write a C program to read any day number in an integer and display the day name in word format. Go to the editor Write a program in C to read any digit and display it in the word.
11/ Write a C program to calculate profit and loss on a transaction.
12/ Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name (single character), and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge is as follows: Charge/unit up to 199 @1.20, 200 and above but less than 400 @1.50, 400 and above but less than 600 @1.80, 600 and above @2.00. If the bill exceeds Tk. 400 then a surcharge of 15% will be charged and the minimum bill should be Tk. 100/-
13/Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
14/ Write a C program to check whether a triangle can be formed with the given values for the angles.
15/ Write a C program to check whether a character is an alphabet, digit, or special character.
16/ Write a C program to check whether an alphabet is a vowel or a consonant.
17/ Write a C program to calculate the root of a quadratic equation.
18/ Write a C program to read the roll no, and marks of three subjects and calculate the total, percentage, and grade.
19/ Write a C program to calculate the final grade of CSEDU 1st Year 1st Semester students. Take total marks as input for all the theory and lab courses. Note that the total marks for each theory course are 100 and the total marks for each lab course are 50.
*/

#include<stdio.h>

void is_equal(int a , int b)
{
    if(a == b)
        printf("%d and %d are equal \n", a, b);
    else
        printf("%d and %d are not equal \n", a, b);
}

void odd_or_even(int a)
{
    if(a % 2 == 0)
        printf("%d is Even\n", a);
    else
        printf("%d is Odd\n", a);
}

void positive_or_negative(int a)
{
    if(a>=0)
        printf("%d is Positive\n", a);
    // though 0 is a non_negative number still 0 is consideded as a positive number for this quesiton
    else
        printf("%d is Negative\n", a);
}

void is_leap_year(int yr)
{
    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
        printf("%d is a leap year.\n", yr);

    else
        printf("%d is not a leap year.\n", yr);

}

void largest_of_three ( int a , int b , int c)
{
    if(a > b && a > c)
        printf ("%d is largest \n", a) ;
    else if (b > c)
        printf("%d is largest \n", b) ;
    else
        printf("%d is largest \n", c);
}

void coordinate_system (int x , int y )
{
    if (x > 0 && y > 0)
        printf("The coordinate point (%d , %d) is in the First quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The coordinate point (%d , %d) is in the Second quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The coordinate point (%d , %d) is in the Third quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The coordinate point ((%d , %d) is in the Fourth quadrant.\n", x, y);

}


// 09 Menu Driven approach
// 12 Onk Calculation
// 17 Quadratic Equation 


void print_day ( )
{

    int day ;

    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid day number.\n");


    }

}

void calculate_profit_loss()
{
    int cost, sell, profit, loss;

    printf("Enter cost price: ");
    scanf("%d", &cost);
    printf("Enter selling price: ");
    scanf("%d", &sell);

    if (sell > cost) {
        profit = sell - cost;
        printf("Profit: %d\n", profit);
    } else if (sell < cost) {
        loss = cost - sell;
        printf("Loss: %d\n", loss);
    } else {
        printf("No profit or loss.\n");
    }

}


void kind_of_triangle()
{
    int a , b , c;
    printf("Enter sides of a triange :  ");
    scanf("%d %d %d" , &a , &b , &c);

    if (a == b && b == c) {
        printf("The triangle is Equilateral.");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.");
    } else {
        printf("The triangle is Scalene.");
    }


}

void can_be_triangle( )
{
    int a , b , c;
    scanf("%d %d %d", &a , &b , &c);

    // considering all to be positive

    if(a + b + c == 180)
        printf("Can be a trinagle \n");
    else
        printf("Can not be a trinagle \n");


}

void is_character ()
{
    char ch ;
    printf("Enter a kind of character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z' || ch>='a' && ch<='z')
        printf("Alphabet\n");
    else if(ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Character \n");


}

void is_vowel()
{
    char ch ;
    printf("Enter a charecter : ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        printf("Vowel\n");
    else
        printf("Consonent\n");
}

void calculate_root()
{
    int a , b ,c ;
    printf("Enter a , b , c considering ax^2 + bx + c : \n");
    scanf("%d %d %d ", &a , &b , &c);

    int d = b*b - 4*a*c;

    if(d == 0) {
        printf("Roots are equal \n");
    } else if (d> 0) {
        printf("Roots are real \n");
    } else if(d < 0) {
        printf("Roots are imaginary\n");
    }
}

void calculate_grade()
{
    int roll;
    printf("Enter roll : ");
    scanf("%d", &roll);

    int s1, s2, s3;
    printf("Enter three sub numbers : ");
    scanf("%d %d %d", &s1, &s2, &s3);

    printf("Total : %d\n", s1+s2+s3);
    float percentage = (( s1+s2+s3)/3)* 100;

    if(percentage >= 80)
        printf("A+");
    else if (percentage >= 70 && percentage <80)
        printf("A");

    else if (percentage >= 60 && percentage <70)
        printf("A-");

    else if (percentage >= 50 && percentage <60)
        printf("B");


    else if (percentage >= 40 && percentage <50)
        printf("C");

    else
        printf("F");


}


void du_cse_grade()
{
    int maths, eee, chemistry, fcc, dm, eeelab, chelab,fcclab;
    float theory_total_marks,lab_total_marks, percentage;
    char grade;

    printf("Enter marks obtained in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks obtained in EEE: ");
    scanf("%d", &eee);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks obtained in FCC: ");
    scanf("%d", &fcc);
    printf("Enter marks obtained in DM: ");
    scanf("%d", &dm);
    printf("Enter marks obtained in EEElab : ");
    scanf("%d", &eeelab);
    printf("Enter marks obtained in CHemistry Lab : ");
    scanf("%d", &chelab);
    printf("Enter marks obtained in FCCLAB : ");
    scanf("%d", &fcclab);

    theory_total_marks = maths + eee + chemistry + fcc + dm;
    lab_total_marks = eeelab+ chelab+fcclab;

    // Ignored the credit sytem for simplicity

    percentage = (theory_total_marks/5)*100 + (lab_total_marks/3)*50;

    if(percentage >= 80)
        grade = 'P';
    else if(percentage >= 75)
        grade = 'A';
    else if(percentage >= 65)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else if(percentage >= 55)
        grade = 'E';
    else if(percentage >= 50)
        grade = 'E';
    else if(percentage >= 45)
        grade = 'E';
    else if (percentage >= 40)
        grade = 'K';
    else
        grade = 'F';
    printf("%C", grade);
}

void display_month()
{
    int num;
    printf("Enter month number : ");
    scanf("%d", &num);

    switch(num) {
    case 1 :
        printf("January\n");
        break;
    case 2 :
        printf("February\n");
        break;
    case 3 :
        printf("March\n");
        break;
    case 4 :
        printf("April\n");
        break;
    case 5 :
        printf("May\n");
        break;
    case 6 :
        printf("June\n");
        break;
    case 7 :
        printf("July\n");
        break;
    case 8 :
        printf("August\n");
        break;
    case 9 :
        printf("September\n");
        break;
    case 10 :
        printf("October\n");
        break;
    case 11 :
        printf("November\n");
        break;
    case 12 :
        printf("December\n");
        break;
          default: printf("Invalid month number.\n");
    }
}

void display_month_days()
{
    int month;

    printf("Enter month number : ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: printf("January ,31 .\n");
                break;
        case 2: printf("February ,28 or 29 .\n");
                break;
        case 3: printf("March , 31 \n");
                break;
        case 4: printf("April , 30 \n");
                break;
        case 5: printf("May , 31 \n");
                break;
        case 6: printf("June , 30 \n");
                break;
        case 7: printf("July , 31 days\n");
                break;
        case 8: printf("August , 31 days\n");
                break;
        case 9: printf("September , 30 \n");
                break;
        case 10: printf("October , 31 \n");
                 break;
        case 11: printf("November , 30 \n");
                 break;
        case 12: printf("December , 31 \n");
                 break;
        default: printf("Invalid month number.\n");
    }
}

int main()
{
    // int a , b , c;
    // scanf("%d %d %d" , &a , &b, &c);

    // is_equal(a,b);
    // odd_or_even(a);
    // positive_or_negative(a);
    // is_leap_year(a);
    // largest_of_three(a , b , c);
    // coordinate_system(a , b);


    // print_day();
    // calculate_profit_loss();
    // kind_of_triangle();

    // can_be_triangle();
    // is_character ();
    // is_vowel();
    // calculate_root();
    // calculate_grade();
    // du_cse_grade();
    display_month();

}
