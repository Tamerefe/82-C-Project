#include <stdio.h>
#include <math.h>

int main() {

    int x1,x2,y1,y2,ttly,ttlx,mxtl;

    printf("\n 1. Point (X Y): ");
    scanf("%d %d",&x1,&y1);

    printf("\n 2. Point (X Y): ");
    scanf("%d %d",&x2,&y2);

    if ( x1 > x2 ){
        ttlx = x1 - x2;
    } else {
        ttlx = x2 - x1;
    }   
    if ( y1 > y2 ){
        ttly = y1 - y2;
    } else {
        ttly = y2 - y1;
    }

    if (ttlx > 0){
        printf("\nThe X point distances are in the East direction");
    } else if (ttlx < 0){
        printf("\nThe X point distances are in the West direction");
    } else {
        printf("\nThe X point distances are in the 0 direction");
    }

    if (ttly > 0){
        printf("\nThe Y point distances are in the North direction");
    } else if (ttly < 0){
        printf("\nThe Y point distances are in the South direction");
    } else {
        printf("\nThe Y point distances are in the 0 direction");
    }

    mxtl = sqrt((ttlx*ttlx) + (ttly*ttly));

    printf("\nShortest distance between two points: %d",mxtl);

    return 0;
}