// int bubbleSort(int,int);
int bubbleSort(int arr[],int n){

        for(int j=0;j<n-1;j++){
            for(int i=0;i<n-1;i++){
                if (arr[i]>arr[i+1]){
                    int a=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=a;
                }
                else{
                    continue;
                }
            }
            n=n-1;
        
    }
}
// int printArray(int,int);
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}