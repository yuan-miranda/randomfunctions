#pragma once
#include <iostream>
#include <vector>

/**
 * @brief Perform a recursive binary search on a sorted array to find the index of the target element.
 *
 * @param arr The sorted array.
 * @param left The left index of the search range.
 * @param right The right index of the search range.
 * @param target The target element to find.
 * @return Returns the index of the target element when found, otherwise -1.
 */
int BinarySearchArray(int arr[], int left, int right, int target);

/**
 * @brief Calculate the amount of energy a mass has using Einstein's equation, E=mc^2.
 * The maximum input mass is 205kg before encountering integer overflow lol.
 *
 * @param massKg Mass in kilogram units. The maximum input is 205kg before encountering integer overflow.
 * @return Returns the amount of energy in joules for the given mass.
 */
std::uint64_t EmcSquared(int massKg);

/**
 * @brief Checks if the input is an even number.
 *
 * @param number Number to check.
 * @return Returns true if even, otherwise false.
 */
bool Even(int number);

/**
 * @brief Calculate the factorial of the input number.
 *
 * @param number Number to calculate the factorial for.
 * @return Returns the factorial of the input number.
 */
int Factorial(int number);

/**
 * @brief Calculate the Greatest Common Divisor of the two integer input
 * using the Euclidean algorithm.
 *
 * @param a First number.
 * @param b Second number.
 * @return Returns the GCD of the input numbers.
 */
int GCD(int a, int b);

/**
 * @brief Generate even numbers within the given range.
 *
 * @param range The range to generate even numbers in.
 * @return Returns a vector of even numbers.
 */
std::vector<int> GenerateEven(int range);

/**
 * @brief Generate odd numbers within the given range.
 *
 * @param range The range to generate odd numbers in.
 * @return Returns a vector of odd numbers.
 */
std::vector<int> GenerateOdd(int range);

/**
 * @brief Converts hexadecimal to decimal and can handle up to
 * 16 hex digits or 64 bits value.
 *
 * @param hexString String hexadecimal value.
 * @return Returns the decimal value of the input, otherwise -1.
 */
std::uint64_t HexToDec(std::string hexString);

/**
 * @brief Calculate the Least Common Multiple of the two integer input.
 *
 * @param a First number.
 * @param b Second number.
 * @return Returns the LCM of the input numbers.
 */
int LCM(int a, int b);

/**
 * @brief Checks if the input is an odd number.
 *
 * @param number Number to check.
 * @return Returns true if odd, otherwise false.
 */
bool Odd(int number);