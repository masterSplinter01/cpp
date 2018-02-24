//
// Created by dan on 10.11.17.
//

#ifndef CW2_RATIONAL_H
#define CW2_RATIONAL_H


class rational {
public:
    /* минимально необходимый набор методов */
    rational(int number);

    rational(int nominator, unsigned int denominator);

    /* прибавить переданное к текущему */
    rational& add(const rational& other);

    /* умножить текущее на переданное */
    rational& multiply(const rational& other);
    rational& multiply(const int other);

    /* изменить знак числа */
    rational& negate();

    /* проверить равны ли два числа */
    bool equals(const rational& other) const;

    /* проверить правда ли что текущее число меньше переданного */
    bool less(const rational& other) const;

    /* проверить отрицательность числа */
    bool negative() const;

    /* числитель */
    unsigned int nominator() const;

    /* знаменатель */
    unsigned int denominator() const;

    /* выделить целую часть(округлить в сторону нуля) */
    int toInt() const;

    int gcd (int a, int b);
    void simplify();
    /*
    bool operator < (rational other);
    bool operator > (rational other);
    bool operator == (rational other);
    bool operator == (const int other);
    bool operator != (rational other);
    bool operator >= (rational other);
    bool operator <= (rational other);
    rational operator + (rational other);
    rational operator - (rational other);
    rational operator * (rational other);

    void operator *= (rational other);
    void operator *= (const int other);

    void operator += (rational other);
    void operator += (const int other);

    void operator -= (rational other);
    void operator -= (const int other);
*/
    //void operator int();

private:

    int _nominator;
    int _denominator;
};


#endif //CW2_RATIONAL_H
