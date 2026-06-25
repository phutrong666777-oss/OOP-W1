#include "Fraction.h"

    Fraction FractionCaculatorTemplate::getFraction(){
            Fraction c;

            cout<<"Enter your fraction:"<<"\n";

            cout<<"Enter your numerator:";
            cin>>c.num;

            cout<<"Enter your denominator:";
            cin>>c.den;

            while(c.den==0){
                cout<<"Your Denominator Is Invalid"<<"\n";
                cout<<"Please Re-Enter Your Denominator:";
                cin>>c.den;
            }

            return c;
        }

    void FractionCaculatorTemplate::printFraction(const Fraction& c){
        float res=(float) c.num/c.den;

        cout<<"Decimal form:"<<res<<"\n";
        cout<<"Fraction form:"<<c.num<<"/"<<c.den<<"\n";

    }
    
    void FractionCaculatorTemplate::doCalculation(){
        printCalcType();

        Fraction a = getFraction();
        Fraction b = getFraction();
        Fraction res;

        int num=calcNum(a, b);
        int den=calcDen(a, b);
        res=simplifyFraction(num,den);

        printFraction(res);
    }

    Fraction FractionCaculatorTemplate::simplifyFraction(int a, int b){
        int GCD=gcd(a,b);
        Fraction res;

        res.num=a/GCD;
        res.den=b/GCD;

        return res;
    }

    void calcSumFraction::printCalcType(){
        cout<<"You are calculating the sum of two fractions"<<"\n";
    }

    int calcSumFraction:: calcNum(Fraction a, Fraction b){
        return a.num*b.den+b.num*a.den; 
    }

    int calcSumFraction:: calcDen(Fraction a, Fraction b){
        return a.den*b.den;
    }

    void calcMultifyFraction::printCalcType(){
        cout<<"You are calculating the product of two fractions"<<"\n";
    }

    int calcMultifyFraction:: calcNum(Fraction a, Fraction b){
        return a.num*b.num;
    }

    int calcMultifyFraction:: calcDen(Fraction a, Fraction b){
        return a.den*b.den;
    }

    void calcDiffFraction::printCalcType(){
        cout<<"You are calculating the difference of two fractions"<<"\n";
    }

    int calcDiffFraction:: calcNum(Fraction a, Fraction b){
        return a.num*b.den-b.num*a.den;
    }

    int calcDiffFraction:: calcDen(Fraction a, Fraction b){
        return a.den*b.den;
    }

    void calcDivFraction::printCalcType(){
        cout<<"You are calculating the division of two fractions"<<"\n";
    }

    int calcDivFraction:: calcNum(Fraction a, Fraction b){
        return a.num*b.den;
    }

    int calcDivFraction:: calcDen(Fraction a, Fraction b){
        return a.den*b.num;
    }

int main(){
    
    calcSumFraction sum;
    sum.doCalculation();

    calcMultifyFraction mult;
    mult.doCalculation();

    calcDiffFraction diff;
    diff.doCalculation();

    calcDivFraction div;
    div.doCalculation();

}