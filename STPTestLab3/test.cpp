#include "pch.h"

#pragma region TestingFunctionGetMax

TEST(GetMax, caseEqual) {
	int a = 1, b = 1, c = 1;
	int exp = 1;
	EXPECT_EQ(exp, get_max(a, b, c));
}

TEST(GetMax, caseFirstBigger) {
	int a = 2, b = 1, c = 0;
	int exp = 2;
	EXPECT_EQ(exp, get_max(a, b, c));
}

TEST(GetMax, caseSecondBigger) {
	int a = 1, b = 4, c = 0;
	int exp = 4;
	EXPECT_EQ(exp, get_max(a, b, c));
}

TEST(GetMax, caseThirdBigger) {
	int a = 1, b = 2, c = 5;
	int exp = 5;
	EXPECT_EQ(exp, get_max(a, b, c));
}

TEST(GetMax, caseNegativeBigger) {
	int a = -1, b = -2, c = -3;
	int exp = -1;
	EXPECT_EQ(exp, get_max(a, b, c));
}

#pragma endregion

#pragma region TestingFunctionGetBitAtoB

TEST(GetBitAtoB, caseNotEvenAmountOfBits) {
	int a = 12345, b = 0;
	int exp = 42;
	get_bit_a_to_b(a, b);
	EXPECT_EQ(exp, b);
}

TEST(GetBitAtoB, caseEvenAmountOfBits) {
	int a = 123456, b = 0;
	int exp = 642;
	get_bit_a_to_b(a, b);
	EXPECT_EQ(exp, b);
}

TEST(GetBitAtoB, caseZeroEq) {
	int a = 0, b = 0;
	int exp = 0;
	get_bit_a_to_b(a, b);
	EXPECT_EQ(exp, b);
}

#pragma endregion

#pragma region TestingGetMinFromBits

TEST(GetMinFromBits, caseFirstMin) {
	int a = 12345;
	int exp = 1;
	EXPECT_EQ(exp, get_min_from_bits(a));
}

TEST(GetMinFromBits, caseAverageMin) {
	int a = 23145;
	int exp = 1;
	EXPECT_EQ(exp, get_min_from_bits(a));
}

TEST(GetMinFromBits, caseAtEndMin) {
	int a = 54321;
	int exp = 1;
	EXPECT_EQ(exp, get_min_from_bits(a));
}

#pragma endregion

#pragma region TestGetSumOfNotEvenElementsDownGeneralDiagInMatrix

TEST(GetSumOfNotEvenElementsDownGeneralDiagInMatrix, caseQuadraMatrix) {
	int size = 3;
	int** m = new int* [size];
	for (int i = 0; i < size; ++i) {
		m[i] = new int[size] {1, 1, 1};
	}
	int exp = 6;
	EXPECT_EQ(exp, get_sum_of_not_even_elements_down_general_diag_in_matrix(m, size, size));
}

TEST(GetSumOfNotEvenElementsDownGeneralDiagInMatrix, caseRowAmountBiggerColumnsAmountMatrix) {
	int sizea = 4;
	int sizeb = 3;
	int** m = new int* [sizea];
	for (int i = 0; i < sizea; ++i) {
		m[i] = new int[sizeb] {1, 1, 1};
	}
	int exp = 9;
	EXPECT_EQ(exp, get_sum_of_not_even_elements_down_general_diag_in_matrix(m, sizea, sizeb));
}

TEST(GetSumOfNotEvenElementsDownGeneralDiagInMatrix, caseColumnAmountBiggerRowAmountMatrix) {
	int sizea = 3;
	int sizeb = 4;
	int** m = new int* [sizea];
	for (int i = 0; i < sizea; ++i) {
		m[i] = new int[sizeb] {1, 1, 1, 1};
	}
	int exp = 6;
	EXPECT_EQ(exp, get_sum_of_not_even_elements_down_general_diag_in_matrix(m, sizea, sizeb));
}

#pragma endregion

