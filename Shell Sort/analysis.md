- Shell sort is an algorithm that first sorts the elements far apart from each other and successively reduces the interval between the elements to be sorted. It is a generalized version of insertion sort.

- it creates gaps between elements and sorts them first such that when gap is 1 it means it is original insertion sort the input array has very less elements to be sorted and it is usually takes lesser time then applying insetion sort on the given array

- since insertion sort is stable shell sort is also stable

  |                  |          |
  | ---------------- | -------- |
  | time complexity  | O(n^1.5) |
  | space complexity | O(1)     |
  | Stable           | True     |
