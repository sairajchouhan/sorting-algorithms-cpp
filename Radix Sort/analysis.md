- the idea of Radix Sort is to dsort digit by digit sort starting from least significant digit to most significant digit

- In this example Radix sort uses Bucket sort as a subroutine to sort.

- what is the running time of radix sort

  - Let there be d digits in input integers. Radix Sort takes O(d\*(n+b)) time where b is the base for representing numbers, for example, for the decimal system, b is 10
  - If k is the maximum possible value, then d would be O(log(k) base b)
  - So overall time complexity is O((n+b) \* log(k) base b). Which looks more than the time complexity of comparison-based sorting algorithms for a large k
  - Let us first limit k. Let k <= n^c where c is a constant. In that case, the complexity becomes O(nLog(n) base b). But it still doesn’t beat comparison-based sorting algorithms
  - If we set b as n, we get the time complexity as O(n)
  - In other words, we can sort an array of integers with a range from 1 to n^c if the numbers are represented in base n (or every digit takes log(n) base 2 bits).

|                  |               |
| ---------------- | ------------- |
| time complexity  | O(d\*(n + b)) |
| space complexity | O(n+ 2^d))    |
| stable           | true          |

- In the above table d is number of digits, b is the values of number system
- b is 10 for decimal number system and b is 2 for binary number system
