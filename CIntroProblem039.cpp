#include <stdio.h>

void calculateMonthlyPayment(double loanAmount, double annualInterestRate, int loanTerm) {
    double monthlyInterestRate = annualInterestRate / 12; 
    double monthlyPrincipalPayment = loanAmount / (loanTerm * 12); 
    double totalPayment = 0; 
    double remainingLoan = loanAmount; 

    
    for (int i = 0; i < loanTerm * 12; i++) {
        double interestPayment = remainingLoan * monthlyInterestRate; 
        totalPayment += monthlyPrincipalPayment + interestPayment; 
        remainingLoan -= monthlyPrincipalPayment; 
    }

    printf("%.2lf ", totalPayment);
    printf("%.2lf", totalPayment - loanAmount);
}

int main() {
    double loanAmount, annualInterestRate;
    int loanTerm;
    
    freopen("ngothuc.txt", "r", stdin);

    scanf("%lf %lf %d", &loanAmount, &annualInterestRate, &loanTerm);

    annualInterestRate /= 100;

    calculateMonthlyPayment(loanAmount, annualInterestRate, loanTerm);

    return 0;
}

