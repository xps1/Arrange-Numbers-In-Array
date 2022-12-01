void arrange(int *arr, int n)
{
    //Write your code here
    int val = 1;
    int start_index = 0;
    int end_index = n-1;
    while(start_index <= end_index){
        if(val%2==1){
            arr[start_index] = val;
            val++;
            start_index++;
        }
        else{
            arr[end_index] = val;
            val++;
            end_index--;
        }
    }
}