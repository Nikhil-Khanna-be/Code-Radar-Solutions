int insertionSort(int arr[],int n){

        for(int j=0;j<n-1;j++){
            for(int i=0;i<n-j-1;i++){
                if (arr[i]>arr[i+1]){
                    int a=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=a;
                }
                else{
                    continue;
                }
            }
            
        
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}