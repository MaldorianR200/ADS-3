// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int left = 0;
  int right = size - 1;
  int mid = 0;
  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == value) {
      int save = mid - 1;
      while (arr[mid] == value) {
        if (arr[mid] == value) {
          ++mid;
          ++count;
        } else {
          break;
        }
      }
      while (arr[save] == value) {
        if (arr[save] == value) {
          --save;
          ++count;
        } else {
          break;
        }
      }
      break;
    }
    if (arr[mid] > value) {
      right = mid = 1;
    } else {
      left = mid + 1;
    }
  }
  return count;
}
