int main()
{
    int avg=0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arrLength; i++){
        avg += arr[i];
    }
    
    int mean = avg/arrLength;
    int num =0 ;
    
    for(int i=0; i<arrLength; i++){
        int std = arr[i]-mean;
        num += (std*std);
    }
    
    printf("Mean = %d\nSum = %d\n", mean, num);
    
    float SD = (float)num/(arrLength);
    
    float stdDev = sqrt(SD);
    
    printf("Standard deviation = %f", stdDev);

    return 0;   
}
