int findUnsortedSubarray(int arr[],int a){
    int arr2[a];
    for (int i=0;i<a;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<a;i++){

    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int x=0;
    int y=0;
    for(int i=0;i<a;i++){
        if(arr[i]==arr2[i]){
            continue;
        }
        else{
            x=i;
            break;
        }
    }
    for (int i=a-1;i>=0;i--){
        if(arr[i]==arr2[i]){
            continue;
        }
        else{
            y=i;
            break;
        }
    }
    int c=y-x+1;
    if(x==0&&y==0){
        return 0;
    }
    else{
        return c;
    }
}