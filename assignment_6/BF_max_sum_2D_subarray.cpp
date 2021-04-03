/**
 * IIT2019234 - Kodi Pravallika
 * IIT2019235 - Vishwam Shriram Mundada
 * IIT2019236 - Noonsavath Samyukta Sravana
 * 
 * Question :
 * Given a 2D array, find the maximum sum subarray in it.
 * 
 * Brute Force approach
 */

#include <bits/stdc++.h>
using namespace std;

int findSum(vector<vector<int> > &a, int x, int y, int z, int w)
{
	int sum = 0;
	
	for(int i = x; i <= z; ++i)
		for(int j = y; j <= w; ++j)
			sum += a[i][j];
	
	return sum;
}

int main() 
{
	int maxSum = INT_MIN, tempSum = 0;
	int x, y, z, w;
	int n = 0, m = 0;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int>(m, 0));
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin >> a[i][j];
	
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			for(int k = 0; k < n; ++k)
			{
				for(int l = 0; l < n; ++l)
				{
					tempSum = findSum(a, i, j, k, l);
					if(tempSum > maxSum)
					{
						x = i;
						y = j;
						z = k;
						w = l;
						maxSum = tempSum;
					}
				}
			}
		}
	}
	cout << "top left : " << x << " " << y << endl;
    cout << "bottom right : " << z << " " << w << " " << endl;
    cout << "maximum sum : " << maxSum << endl;
	return 0;
}