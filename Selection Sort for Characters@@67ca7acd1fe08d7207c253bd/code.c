void selectionSort(char arr[],int n){

        for(int j=0;j<n-1;j++){
            for(int i=0;i<n-j-1;i++){
                if (int arr[i]>int arr[i+1]){
                    char a=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=a;
                }
                else{
                    continue;
                }
            }
            
        
    }
}

void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}