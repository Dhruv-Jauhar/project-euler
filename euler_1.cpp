#include <iostream>

long sumOfFirstN(long n){
    return (n*(n+1))/2;
}

int main(){
    long numTestCases = 0;
    long maxNum = 0;
    long result = 0;
    std::cin >> numTestCases;
    for(int i = 0; i < numTestCases; i++){       
        std::cin>>maxNum;
        long sumOfMultiplesOfThree= 3 * sumOfFirstN((maxNum-1) / 3);
        long sumOfMultiplesOfFive= 5 *sumOfFirstN((maxNum-1) / 5);
        long sumOfMultiplesOfFifteen= 15 * sumOfFirstN((maxNum-1) / 15);
        result = sumOfMultiplesOfThree + sumOfMultiplesOfFive - sumOfMultiplesOfFifteen;
        std::cout << result << std::endl;
   }
    return 0;
}