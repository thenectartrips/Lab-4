#include <stdio.h>

int main(){
    int l1 , l2 , l3 , b1 , b2 , b3 , p1 , p2 , p3 ;
    printf("Enter length and breadth of rectangle 1 : \n");
    scanf("%d %d",&l1,&b1);
    p1=2*(l1+b1);
    printf("Enter length and breadth of rectangle 2 : \n");
    scanf("%d %d",&l2,&b2);
    p2=2*(l2+b2);
    printf("Enter length and breadth of rectangle 3 : \n");
    scanf("%d %d",&l3,&b3);
    p3=2*(l3+b3);

    if (p1>p2 && p1>p3)
        printf("Perimeter of rectangle 1 is greatest\n");
    else if (p2>p1 && p2>p3)
        printf("Perimeter of rectangle 2 is greatest\n");
    else if (p3>p1 && p3>p2)
        printf("Perimeter of rectangle 3 is greatest\n");
    else if (p1 == p2 == p3)
        printf("All rectangles have equal perimeter\n");
    else
    printf("Invalid input...Please enter valid lengths and breadths\n");

    return 0;
}