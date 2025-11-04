//arrange it like all zero will come first and then all one will come after it

#include <stdio.h>
int main(){
    int arr[] = {0,1,1,1,0,1,0,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int zerocount = 0 ;

for (int i = 0; i < n ; i++){
    if (arr[i] == 0){
        zerocount++ ;
    }
}
for (int i = 0; i < zerocount; i++){
    arr[i] = 0 ;
}
for (int i = zerocount; i < n ; i++){
    arr[i] = 1;
}

printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

return 0;

}