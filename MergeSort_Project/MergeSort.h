#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

template <typename T>
class MergeSort {
public:
    static void sort(std::vector<T>& arr) {
        if (arr.size() < 2) return;
        std::vector<T> tmp(arr.size());
        mergeSort(arr, tmp, 0, static_cast<int>(arr.size()) - 1);
    }

private:
    static void mergeSort(std::vector<T>& a, std::vector<T>& tmp, int left, int right) {
        if (left >= right) return;
        int mid = left + (right - left) / 2;
        mergeSort(a, tmp, left, mid);
        mergeSort(a, tmp, mid + 1, right);
        merge(a, tmp, left, mid, right);
    }

    static void merge(std::vector<T>& a, std::vector<T>& tmp, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        int k = left;

        while (i <= mid && j <= right) {
            if (a[i] <= a[j]) tmp[k++] = a[i++];
            else tmp[k++] = a[j++];
        }

        while (i <= mid) tmp[k++] = a[i++];
        while (j <= right) tmp[k++] = a[j++];

        for (int idx = left; idx <= right; ++idx)
            a[idx] = tmp[idx];
    }
};

#endif