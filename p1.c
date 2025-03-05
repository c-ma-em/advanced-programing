// function to calculate the average of an array

double avg(int a[] , int count){
  int sum = 0 ;
  for (int i = 0; i < count; i++){
    sum += a[i];
  }
  return (double)sum / count ;
}


// Function to find the maximum value in an array
int Max(int a[], int count) {
    int maxVal = a[0]; 
    for (int i = 1; i < count; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    return maxVal;
}


// Function to find the minimum value in an array
int Min(int a[], int count) {
    int minVal = a[0];
    for (int i = 1; i < count; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
    }
    return minVal;
}


// Function to calculate the remainder of division (modulus)
int Mod(int a, int b) {
    return a % b; // Returns the remainder of a divided by b
}
