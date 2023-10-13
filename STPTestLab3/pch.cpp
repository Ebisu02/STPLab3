#include "pch.h"

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

int get_max(int a, int b, int c) {
    int r = a > b ? a : b;
    r = r > c ? r : c;
    return r;
}

void get_bit_a_to_b(int a, int& b) {
    b = 0;
    while (a > 0) {
        int digit = a % 10; // get bit
        if (digit % 2 == 0) { // if even
            b = b * 10 + digit; // add this bit to b 
        }
        a /= 10; // go to next bit
    }
}

int get_min_from_bits(int a) {
    int r = a % 10;
    while (a > 0) {
        int digit = a % 10;
        r = r > digit ? digit : r;
        a /= 10;
    }
    return r;
}

int get_sum_of_not_even_elements_down_general_diag_in_matrix(int** matrix, int size_a, int size_b) {
    int res = 0;
    try {
        for (int i = 0; i < size_a; ++i) {
            for (int j = 0; j < size_b; ++j) {
                if (i >= j) {
                    res += matrix[i][j] % 2 == 1 ? matrix[i][j] : 0;
                }
            }
        }
        return res;
    }
    catch (std::exception e) {
        std::cout << e.what();
        throw e;
        return -1;
    }
}