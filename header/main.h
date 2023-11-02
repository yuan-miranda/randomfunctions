#pragma once
#include<iostream>
#include<vector>

int GCD(int num1, int num2);
int LCM(int num1, int num2);
int Factorial(int number);
bool Odd(int number);
bool Even(int number);
std::vector<int> GenerateOdd(int range);
std::vector<int> GenerateEven(int range);
std::string Base16ToBase10(std::string hexString);
std::uint64_t Emc2(int massKg);