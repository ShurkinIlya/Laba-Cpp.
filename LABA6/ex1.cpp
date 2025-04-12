#include <iostream>
#include <numeric>

using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int num, int den){
            numerator = num;
            denominator = den;
        }

        Fraction operator + (const Fraction& other) const{
            int lcm = std::lcm(denominator, other.denominator);
            int newNumerator1 = numerator * (lcm / denominator);
            int newNumerator2 = other.numerator * (lcm / other.denominator);
                
            return Fraction(newNumerator1 + newNumerator2, lcm);
        }
        Fraction operator - (const Fraction& other) const{
            int lcm = std::lcm(denominator, other.denominator);
            int newNumerator1 = numerator * (lcm / denominator);
            int newNumerator2 = other.numerator * (lcm / other.denominator);
                
            return Fraction(newNumerator1 - newNumerator2, lcm);
        }
        Fraction operator * (const Fraction& other) const{
            int newNumerator = numerator * other.numerator;
            int newDenominator = denominator * other.denominator;
            int gcd = std::gcd(newNumerator, newDenominator);
                
            return Fraction(newNumerator / gcd, newDenominator / gcd);
        }
        Fraction operator / (const Fraction& other) const{
            int newDenominator = denominator * other.numerator;
            int newNumerator = numerator * other.denominator;
            int gcd = std::gcd(newNumerator, newDenominator);
                
            return Fraction(newNumerator / gcd, newDenominator / gcd);
        }
        friend ostream& operator << (ostream& os, const Fraction& fraction){
            os << fraction.numerator << "/" << fraction.denominator;
            return os;
        }
};

int main()
{
    Fraction fraction1(3, 5);
    Fraction fraction2(5, 6);

    Fraction sum = fraction1 + fraction2;
    Fraction dif = fraction1 - fraction2;
    Fraction mult = fraction1 * fraction2;
    Fraction div = fraction1 / fraction2;

    cout << fraction1 << " + " << fraction2 << " = " << sum << std::endl;
    cout << fraction1 << " - " << fraction2 << " = " << dif << std::endl;
    cout << fraction1 << " * " << fraction2 << " = " << mult << std::endl;
    cout << fraction1 << " / " << fraction2 << " = " << div << std::endl;

    return 0;
}