#include<iostream>
#include<numeric>
using namespace std;
struct Fraction{
    int num;
    int den;
};

class FractionCaculatorTemplate{
public:

    void doCalculation();

protected:
    virtual void printCalcType()=0;

    virtual int calcNum(Fraction a, Fraction b)=0;

    virtual int calcDen(Fraction a, Fraction b)=0;

private:

    Fraction getFraction();

    void printFraction(const  Fraction& c);

    Fraction simplifyFraction(int num, int den);
};

class calcSumFraction : public FractionCaculatorTemplate{
protected:
    void printCalcType() override;
    int calcNum(Fraction a, Fraction b) override;
    int calcDen(Fraction a, Fraction b) override;
};

class calcMultifyFraction : public FractionCaculatorTemplate{
protected:
    void printCalcType() override;
    int calcNum(Fraction a, Fraction b) override;
    int calcDen(Fraction a, Fraction b) override;
};

class calcDiffFraction : public FractionCaculatorTemplate{
protected:
    void printCalcType() override;
    int calcNum(Fraction a, Fraction b) override;
    int calcDen(Fraction a, Fraction b) override;
};

class calcDivFraction : public FractionCaculatorTemplate{
protected:
    void printCalcType() override;
    int calcNum(Fraction a, Fraction b) override;
    int calcDen(Fraction a, Fraction b) override;
};
