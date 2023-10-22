   long long trappingWater(int arr[], int n){
       int left = 0;
       int right = n-1;
       long long res = 0;
       int maxleft = 0;
       int maxright = 0;
       while(left <= right){
           if(arr[left] <= arr[right]){
               if(arr[left] >= maxleft){
                   maxleft = arr[left];
               }
               else{
                   res += maxleft-arr[left];
               }
               left++;
           }
           else{
               if(arr[right] >= maxright){
                   maxright = arr[right];
               }
               else{
                   res += maxright - arr[right];
               }
               right--;
           }
       }
       return res;
    }
