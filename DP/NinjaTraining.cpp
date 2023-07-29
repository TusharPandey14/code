#include <algorithm> 

int ninjaTraining(int n, vector<vector<int>> &points)

{

    // Write your code here.

    std :: vector<int> prev(4);

    prev[0] = std::max(points[0][1], points[0][2]);

    prev[1] =  std::max(points[0][0], points[0][2]);

    prev[2] = std::max(points[0][0], points[0][1]);

    prev[3] = std::max({points[0][0], points[0][1], points[0][2]});

 

    for(int day= 1; day < n ;day++){

       std :: vector<int> temp(4,0);

        for(int last = 0; last< 4; last ++){

            for(int task = 0 ; task <3; task++){

                if(task != last){

                    temp[last] = std :: max(temp[last] , points[day][task] +prev[task] );

                }

            }

        }

        prev = temp;

        

    }

      return prev[3];

}

 

// #include <bits/stdc++.h>

// int ninjaTraining(int n, std::vector<std::vector<int>>& points) {

//     std::vector<std::vector<int>> dp(n, std::vector<int>(4, 0));

//     dp[0][0] = std::max(points[0][1], points[0][2]);

//     dp[0][1] = std::max(points[0][0], points[0][2]);

//     dp[0][2] = std::max(points[0][0], points[0][1]);

//     dp[0][3] = std::max({points[0][0], points[0][1], points[0][2]}); // Fix here

 

//     for (int day = 1; day < n; day++) {

//         for (int last = 0; last < 4; last++) {

//             for (int task = 0; task < 3; task++) {

//                 if (task != last) {

//                     dp[day][last] = std::max(dp[day][last], points[day][task] + dp[day - 1][task]);

//                 }

//             }

//         }

//     }

//     return dp[n - 1][3];

// }

 

// int ans(int day, int last , vector<vector<int>> &points, vector<vector<int>> &dp){

//     int maxi= 0;

//     if(dp[day][last] != -1) return dp[day][last];

//     if(day == 0){

//         for(int task = 0; task < 3; task++){

//             if(task != last) maxi = max(maxi, points[0][task]);

           

//         }

//          return dp[0][last] = maxi;

//     }

    

 

//     for(int task = 0; task <3; task++){

//         if(task != last) maxi = max(maxi , ans(day -1, task, points,dp) + points[day][task]);

//     }

//     return dp[day][last] =  maxi;

// }

// int ninjaTraining(int n, vector<vector<int>> &points)

// {

//     // Write your code here.

//     vector<vector<int>> dp(n, vector<int> (4, -1));

//     return ans(n-1, 3 , points, dp);

// }