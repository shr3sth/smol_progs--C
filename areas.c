// THIS PROGRAM IS A SIMPLE AREA CALCULATOR
// It calculates the area of a circle, rectangle, or a square etc based on user input.

#include<stdio.h>
#include<math.h>
float area_of_circle(float radius);
float area_of_square(float side);
float area_of_rectangle(float length, float breadth);
float area_of_rhombus(float diagonal1, float diagonal2);
int main(){
  int choice;
  float radius, side, length, breadth, diagonal1, diagonal2;
  printf("Welcome to the Area Calculator!\n");
  printf("Please choose the shape you want to calculate the area for:\n1. Circle\n2. Rectangle\n3. Square\n4. Rhombus\n");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
      area_of_circle(radius);
      break;
    case 2:
      area_of_rectangle(length, breadth);
      break;
    case 3:
      area_of_square(side);
      break;
    case 4:
     area_of_rhombus(diagonal1, diagonal2);
      break;
    default:
      printf("Invalid choice. Please select 1, 2, 3, or 4.\n");
      return -1; // Exit with an error code
  }
  return 0;
}

//AREA OF CIRCLE>>> 
float area_of_circle(float radius) 
{
    printf("To calculate the area of a circle Enter its radius\n");
    scanf("%f", &radius);
    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return -1; // Return an error value
    }
    else if (radius == 0) {
        printf("The area of a circle with radius 0 is 0.\n");
        return 0; // Area is zero for a circle with radius 0
    }
    else  {
        printf("The area of the circle is : %f\n sq units", 3.1415 * radius * radius);
    }
}

// this Function to calculate the area of a rectangle >>>
float area_of_rectangle(float length, float breadth) {
    printf("To calculate the area of a rectangle, enter its dimensions.\n");
    printf("What is the length?\n");
    scanf("%f", &length);
    printf("What is the breadth?\n");
    scanf("%f", &breadth);
    
    if (length < 0 || breadth < 0) {
        printf("Length and breadth cannot be negative.\n");
        return -1; // Return an error value
    }
    
    float area = length * breadth;
    printf("The area of the rectangle is: %f\n sq units", area);
    return area;
  }


// TO  CALCULATE THE AREA OF A SQUARE>>>
float area_of_square(float side) {
    printf("To calculate the area of a square, enter the length of a side.\n");
    scanf("%f", &side);
    
    if (side < 0) {
        printf("Side length cannot be negative.\n");
        return -1; // Return an error value
    }
    
    float area = side * side;
    printf("The area of the square is: %f\n sq units", area);
    return area;
 }
 
 // TO  CALCULATE THE AREA OF A RHOMBUS>>>
float area_of_rhombus(float diagonal1, float diagonal2) {
    printf("To calculate the area of a rhombus, enter the lengths of its diagonals.\n");
    printf("What is the length of diagonal 1?\n");
    scanf("%f", &diagonal1);
    printf("What is the length of diagonal 2?\n");
    scanf("%f", &diagonal2);
    
    if (diagonal1 < 0 || diagonal2 < 0) {
        printf("Diagonal lengths cannot be negative.\n");
        return -1; // Return an error value
    }
    
    float area = (diagonal1 * diagonal2) / 2;
    printf("The area of the rhombus is: %f\n sq units", area);
    return area;
}
