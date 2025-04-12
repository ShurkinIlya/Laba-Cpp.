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
            if(den == 0){
                throw invalid_argument("Error of denominator!");
            }
        }
        Fraction operator + (const Fraction& other) const{
            int lcm = std::lcm(denominator, other.denominator);
            int newNumerator1 = numerator * (lcm / denominator);
            int newNumerator2 = other.numerator * (lcm / other.denominator);

            return Fraction(newNumerator1 + newNumerator2, lcm);
        }
        friend ostream& operator<<(ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
};

int main()
{
    try{
        Fraction fraction1(1, 2);
        Fraction fraction2(2, 3);

        Fraction sum = fraction1 + fraction2;

        cout << fraction1 << " + " << fraction2 << " = " << sum << std::endl;

        return 0;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}