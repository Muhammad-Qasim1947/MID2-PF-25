#include <stdio.h>
int main(){
    int arr[3][3] = {};

    printf("Enter The Elements For 3*3 Array : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3 ; j++){
            printf("Elements At : [%d][%d] ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int maxsum = 0;
    int maxrow = 0;

    for (int i = 0 ; i < 3 ; i++){
        int rowsum = 0;
        for (int j = 0; j < 3 ; j++){
            rowsum += arr[i][j] ;
        }
        printf("The Sum Of Row %d = %d \n",i+1,rowsum);
    
    if (i == 0 || rowsum > maxsum){
        maxsum = rowsum ;
        maxrow = i ;
    }
    }

printf("\nMaximum row sum = %d, Row = %d\n", maxsum, maxrow);
    
    for (int i = 0; i < 3; i++) {
        if (i != maxrow) { // only replace rows other than maxRow
            for (int j = 0; j < 3; j++) {
                arr[i][j] = maxsum;
            }
        }
    }

    // Step 3: Print the final matrix
    printf("\nModified 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
}