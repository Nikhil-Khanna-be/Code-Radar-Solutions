int findUnsortedSubarray(int arr[],int n){
    int a,b;
        int arr2[n];
        for(int i=0;i<n;i++){
            arr2[i]=arr[i];
        }
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
    for(int i=0;i<n;i++){
        if(arr2[i]==arr[i]){
            a=2;
            continue;
        }
        else{
            a=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arr2[n-i-1]==arr[n-i-1]){
            b=1;
            continue;
        }
        else{
            b=(n-i-1);
            break;
        }
    }
    return b-a+1;
}
