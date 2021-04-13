# Assignment 6
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
##### Given a 2D array, find the maximum sum subarray in it.

#### Approaches discussed : 
##### 1) Brute Force Approach
##### 2) Dynamic Programming Approach
---

#### How to use code

##### Download project
###### https://github.com/Vishwam36/DAA_Assignment
<br/>

##### Project Initialize 

###### cd DAA_Assignment
###### cd assignment_6


---

##### Run the code

###### g++ brute_force_app.cpp
###### g++ DP_app.cpp

###### Follow the previous step by entering ./a.out

##### Input

###### The first line contains two integers n1, n2, where n1 indicates number of rows and n2 indicates number of columns
###### next n1 lines contain n2 number of elements


##### Output

###### The maximum sub array sum 
---

##### *Test case*

###### Though input in our code asks only for a string, we are illustrating in test cases with string input as well for the sake of understanding.

##### Test Case-1

###### Input: 4 5
####
|1 | 2|-1|-4|-20|
|--|--|--|--|---|
|-8|-3| 4| 2|  1|
|3 | 8|10| 1|  3|
|-4|-1| 1| 7| -6|

###### Output: 29
###### Explanation: In the following 2D array, the maximum sum subarray=(-3)+4+2+8+10+1+(-1)+1+7=29
<br/>

##### Test Case-2
###### Input: 2 2
#### 
| 1| 3|
|--|--|
|-1| 0|

###### Output: 4
###### Explanation: In the following 2D array, the maximum sum subarray=1+3=4

---

#### Theory
##### In this paper, we have discussed the algorithm which  aims at finding maximum sum sub array for the given array.We have discussed brute force as well as dynamic programming approach.
---

### Analysis

##### Time Complexity

##### Algorithm 1:brute force
###### The time complexity of brute force algorithm is : O(n^3 * m^3)
<br/>

##### Algorithm 2:dynamic programming
###### The time complexity of dynamic programming algorithm is : O(n^2* m)

##### The best case time complexity will be : O(n^2* m)
<br/>

##### Space Complexity

##### Algorithm 1:brute force
###### The space complexity of brute force algorithm is : O(1)
<br/>

##### Algorithm 2:dynamic programming
###### The space complexity of dynamic programming algorithm is : O(m)

---

### Conclusion 

###### From the experimental study we concluded that the average running time of dynamic algorithm is best, which can be observed from the mutual graph of dynamic algorithm and Brute Force algorithm as shown.

--- 

#### References

##### References include following :

[ 1 ]
https://www.geeksforgeeks.org/maximum-sum-rectangle-in-a-2d-matrix-dp-27/
[ 2 ]
https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
<br/>

#### Codes

##### Brute force : https://ideone.com/W0rVpg

##### Dynamic programming : https://ideone.com/Zw0Ape
