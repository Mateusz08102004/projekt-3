#include "pch.h"
#include "gtest/gtest.h"
#include "MergeSort.h"
#include <vector>

// 1. Tablica ju¿ posortowana rosn¹co
TEST(MergeSortTest, AlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// 2. Tablica posortowana w odwrotnej kolejnoœci
TEST(MergeSortTest, ReverseOrder) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// 3. Losowa tablica liczb
TEST(MergeSortTest, RandomArray) {
    std::vector<int> arr = { 3, 1, 4, 5, 2 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// 4. Tablica tylko z liczbami ujemnymi
TEST(MergeSortTest, NegativeNumbers) {
    std::vector<int> arr = { -3, -1, -4, -2, -5 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -2, -1}));
}

// 5. Tablica z liczbami dodatnimi i ujemnymi
TEST(MergeSortTest, NegativeAndPositive) {
    std::vector<int> arr = { -3, 1, -1, 3, 0 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-3, -1, 0, 1, 3}));
}

// 6. Pusta tablica
TEST(MergeSortTest, EmptyArray) {
    std::vector<int> arr;
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr.size(), 0);
}

// 7. Tablica z jednym elementem
TEST(MergeSortTest, SingleElement) {
    std::vector<int> arr = { 42 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

// 8. Tablica z duplikatami
TEST(MergeSortTest, Duplicates) {
    std::vector<int> arr = { 2, 3, 2, 1, 1 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 2, 3}));
}

// 9. Tablica ujemna z duplikatami
TEST(MergeSortTest, NegativeDuplicates) {
    std::vector<int> arr = { -2, -3, -2, -1, -1 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-3, -2, -2, -1, -1}));
}

// 10. Tablica z liczbami ujemnymi, dodatnimi i duplikatami
TEST(MergeSortTest, MixedDuplicates) {
    std::vector<int> arr = { 3, -1, 2, -1, 3, 0 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-1, -1, 0, 2, 3, 3}));
}

// 11. Tablica z dwoma elementami rosn¹co
TEST(MergeSortTest, TwoElementsAscending) {
    std::vector<int> arr = { 1, 2 };
    MergeSort<int>::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2}));
}