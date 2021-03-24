- Merge sort uses divide and conquer paradigam to solve the problem

- It call upon it self until it finds a single element and terminates and bottoms up from there and merges at each level to get final sorted array

- The computation we do at each call is the merge step, which takes some extra space to complete the merge step

- Merge sort works best with linked list since we dont need any extra space to merge linked lists all we need to do is manipulate links so that it is in sorted order which takes constant time, hence merge sort works best for sorting linked lists

|                  |          |
| ---------------- | -------- |
| Time complexity  | O(nlogn) |
| Space complexity | O(n)     |
| Stable           | True     |
