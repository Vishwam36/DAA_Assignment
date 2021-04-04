/**
 * IIT2019234 - Kodi Pravallika
 * IIT2019235 - Vishwam Shriram Mundada
 * IIT2019236 - Noonsavath Samyukta Sravana
 * 
 * Question :
 * Given a 2D array, find the maximum sum subarray in it.
 * 
 * Dynamic Programming approach
 */

#include <bits/stdc++.h>
using namespace std;

int A[101][101];

vector<int> kadane(vector<int> &v)
{
    int maxSum = INT_MIN, tempSum = 0;
    int st = -1, end = -1, localSt = 0;
    for(int i = 0; i < v.size(); ++i)
    {
        tempSum += v[i];
        
        if(maxSum < tempSum)
        {
        	st = localSt;
        	end = i;
        	maxSum = tempSum;
        }
        
        if(tempSum < 0)
        {
        	localSt = i+1;
        	tempSum = 0;
        }
    }
    vector<int> res = {st, end, maxSum};
    return res;
}

int main() 
{
	int r = 0, c = 0, maxSum = INT_MIN, x, y, z, w;
    cin >> r >> c;

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            cin >> A[i][j];
    
    for(int i = 0; i < r; ++i)
    {
        vector<int> sum(c);
        for(int j = i; j < r; ++j)
        {
            for(int col = 0; col < c; ++col)
            {
                sum[col] += A[j][col];
            }
            vector<int> res = kadane(sum);
            if(maxSum < res[2])
            {
            	x = i;
            	y = res[0];
            	z = j;
            	w = res[1];
            	maxSum = res[2];
            }
        }
    }
    cout << "top left : " << x << " " << y << endl;
    cout << "bottom right : " << z << " " << w << " " << endl;
    cout << "maximum sum : " << maxSum << endl;
	return 0;
}