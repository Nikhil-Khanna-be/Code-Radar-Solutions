void selectionSort(char arr[100];int a){
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            int x=arr[j][0];
            int y=arr[j+1][0];
            if(x<y){
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