void selectionSort(char arr[100];int a){
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j][0]<arr[j+1][0]){
                continue;
            }
            else{
                 char temp[100]=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=arr[j];
            }
        }
    }
    
}