void swap_max(int arr[], int l, int n){
    int max=arr[n],p=n;
    for(int i=n;i<l;i++){
        if(arr[i]>max){
            max=arr[i];
            p=i;
        }
        
    }
    arr[p]=arr[n];
    arr[n]=max;
}

