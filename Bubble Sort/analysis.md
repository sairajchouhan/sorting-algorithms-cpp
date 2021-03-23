- Bubble sort is also called as sinking sort

- Bubble sort is named so because after 1 pass (implementing the logic one time) first largest element is placed at last or smaller elements come up similar to bubbles from water

- Time complexity = O(n^2) (primitive operation is comparision)

- Bubble sort is adaptable i.e., the time complexity can be improved if the array is partially sorted

- Bubble sort is not adaptable by nature but with 2 lines of additional code i.e., to check if the swap is happening of not in the inner for loop we can identify if the array is sorted and hence we can reduce additional computation

- Bubble sort is stable i.e., it preserves the order of dublicate elements in the sorted array

- Intermediate result can be useful, i.e., if you want 1st largest integer in an array you can get it by implementing 1 pass and the largest element is at last position of the array

|                                                   |        |
| ------------------------------------------------- | ------ |
| Worst case time complexity                        | O(n^2) |
| Best case time complexity (improved version)      | O(n)   |
| Best case time complexity (non improved version ) | O(n^2) |
| Worst case space complexity                       | O(n)   |
| Stable                                            | True   |
| Adaptable by nature                               | False  |
| Adaptable by improving                            | True   |
