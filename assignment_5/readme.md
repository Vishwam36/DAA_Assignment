# Assignment 5
#### Team Members

|Enrollment No. |	 Name	                       |   GithubId |
|---------------|------------------------------|------------|
|IIT2019234   	|Kodi Pravallika	             |iit2019234  |
|IIT2019235   	|Vishwam Shriram Mundada	     |Vishwam36   |
|IIT2019236   	|Noonsavath Sravana Samyukta	 |samyukta9500|

#### Group no : 17
#### Faculty Name - Dr. Rahul Kala
#### Mentor Name- "Md. Meraz"

## Problem Statement
###### Given a string S, count the number of non-empty sub strings that are palindromes. A sub string is any continuous sequence of characters in the string. A string is said to be palindrome, if the reverse of the string is same as itself. Two sub strings are different if they occur at different positions in S. Solve using Dynamic programming.

---

#### How to use code

##### Download project
###### https://github.com/Vishwam36/DAA_Assignment

##### Project Initialize 

###### cd DAA_Assignment
###### cd assignment_5


---

##### Run the code

###### g++ brute_force_app.cpp
###### g++ DP_app.cpp

###### Follow the previous step by entering ./a.out

##### Input

###### A single line of input contains a string


##### Output

###### Number of pallindromic non empty substrings

---

##### *Test case*

###### Though input in our code asks only for a string, we are illustrating in test cases with string input as well for the sake of understanding.

##### Test Case-1

###### Input: abcbcc

###### Output: 9


###### Test Case-2
###### Input: a

###### Output: 1

---

#### Theory
##### In this paper, we have discussed the algorithm which  aims at counting number of non-empty sub strings that are palindromes in a given string. We have discussed brute force as well as dynamic programming approach
---

### Analysis

*Time Complexity*

##### Algorithm 1:brute force
###### The time complexity of brute force algorithm is : O(n^3)

##### Algorithm 2:dynamic programming
###### The time complexity of dynamic programming algorithm is : O(n^2)

##### The best case time complexity will be : O(n^2)

*Space Complexity*

##### Algorithm 1:brute force
###### The space complexity of brute force algorithm is : O(1)

##### Algorithm 2:dynamic programming
###### The space complexity of dynamic programming algorithm is : O(n^2)

---

### Conclusion 

###### The algorithms discussed in this paper can be used to get number of non empty palindromic substrings. In the matter of comparison between these two algorithms both approaches had differences in time complexity as well as space complexities Dynamic programming approach is better in terms of time complexity, on the other hand its space complexity is higher Brute force doesnt use any extra space 

--- 

#### References

##### References include following :

[ 1 ]
https://www.geeksforgeeks.org/longest-palindrome-substring-set-1/

[ 2 ]
https://www.geeksforgeeks.org/count-palindrome-sub-strings-string/

#### Codes

##### Brute force : https://ideone.com/ZkKHwv

##### Dynamic programming : https://ideone.com/5j8HQW
