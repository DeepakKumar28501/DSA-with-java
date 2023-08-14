#include <stdio.h>
#include <math.h>

int main() {
    double nums[] = {89, 89, 56, 59, 56};
    int n = sizeof(nums)/sizeof(double);
    int i;
    double sum = 0.0, mean, variance, stddev = 0.0;

    for(i=0; i<n; i++) {
        sum += nums[i];
    }

    mean = sum/n;

    for( i=0; i<n; i++) {
        stddev += pow(nums[i] - mean, 2);
    }

    variance = stddev/n;
    stddev = sqrt(variance);

    printf("The standard deviation is: %.2lf\n", stddev);

    return 0;
}

