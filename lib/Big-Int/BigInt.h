#pragma once
#include <vector>
#include <iostream>
#include <cstring>


class BigInt
{
public:
    BigInt();
    BigInt(const std::string &num);
    BigInt(const int&);
    BigInt(const BigInt&);

    BigInt intToBigInt(const int&);
    BigInt power(const BigInt &e);

    BigInt operator+(const BigInt&);
    BigInt operator-(const BigInt&);
    BigInt operator*(const BigInt&);
    BigInt operator/(const BigInt&);

    BigInt operator%(const BigInt&);


    friend std::ostream &operator<<(std::ostream &out, const BigInt &n);
    friend std::istream &operator>>(std::istream &in, const BigInt &n);

private:
    std::vector<char> integer;
    std::vector<char> remainder;
};