#include<stdio.h>
/*Q28.Define a structure Rectangle with members:
int length;
int breadth;
Write a function struct Rectangle inputRectangle() that takes input for a rectangle and returns it.
Write another function int area(struct Rectangle r) that returns the area.*/


struct Rectangle {
    int length;
    int breadth;
};


struct Rectangle inputRectangle() {
    struct Rectangle r;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &r.length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &r.breadth);
    return r;
}


int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    
    struct Rectangle myRectangle = inputRectangle();
    int rectangleArea = area(myRectangle);
    printf("The area of the rectangle is: %d\n", rectangleArea);

    return 0;
}
