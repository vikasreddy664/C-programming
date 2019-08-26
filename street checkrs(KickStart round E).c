/*Problem
Alice and Bob are playing a new virtual reality team game - Street Checkers. The game is set on a very long street divided into tiles which are numbered from 0 to 109(inclusive of both). At the start of the game, Alice and Bob are standing on tile number 0 and are given a random number X in range [L, R] (both ends are inclusive). Alice only jumps to odd numbered tiles, while Bob only jumps to even numbered tiles. If the number on the tile divides X, then the player landing on it has to color it with their favorite color. The game is over after tile X has been colored.

A game is considered interesting by both the players if the absolute difference between the number of tiles painted by each is not greater than 2. Help Alice and Bob find how many numbers in the interval [L, R] could make for an interesting game.

Input
The first line of the input gives the number of test cases, T. T lines follow each containing two integers L and R, the start and end of the interval used to generate the random number X.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the count of numbers in interval [L, R] which results in an interesting game for Alice and Bob.

Limits
Time limit: 40 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ R - L ≤ 105.

Test set 1 (Visible)
1 ≤ L ≤ R ≤ 106.

Test set 2 (Hidden)
1 ≤ L ≤ R ≤ 109.

Sample

Input 
 	
Output 
 
2
5 10
102 102

  
Case #1: 5
Case #2: 1

  
For the first sample case, let us look at all the possible number in range [5, 10]:
5 - Alice would paint 2 tiles : {1, 5}, and Bob would not paint any tile. The game would be interesting since the absolute difference is 2.
6 - Alice would paint 2 tiles : {1, 3}, and Bob would paint 2 tiles : {2, 6}. The game would be interesting since the absolute difference is 0.
7 - Alice would paint 2 tiles : {1, 7}, and Bob would not paint any tile. The game would be interesting since the absolute difference is 2.
8 - Alice would paint 1 tile : {1}, and Bob would paint 3 tiles : {2, 4, 8}. The game would be interesting since the absolute difference is 2.
9 - Alice would paint 2 tiles : {1, 3, 9}, and Bob would not paint any tile. The game would not be interesting since the absolute difference is greater than 2.
10 - Alice would paint 2 tiles : {1, 5}, and Bob would paint 2 tiles : {2, 10}. The game would be interesting since the absolute difference is 0.
Thus, the answer for this test case is 5.

In the second sample case, we have only one number 102. Alice would paint 4 tiles : {1, 3, 17, 51} while Bob would paint 4 tiles : {2, 6, 34, 102}. The game would be interesting since the absolute difference is 0.*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int T,t;
    scanf("%d",&T);
    t=1;
    while(T>0)
    {
        int O_count=0;
        int L,R,i,j,B_count,A_count;
        scanf("%d %d",&L,&R);
        for(i=L;i<=R;i++)
        {   
            j=1;
            A_count=0;
            B_count=0;
            while(j<=i)
            {
            if((i%j==0)&&(j%2==0))
                B_count++;
            else if((i%j==0)&&(j%2==1))
                A_count++;
            j++;
            }
            if(abs(A_count-B_count)<=2)
                O_count++;
        }
        
        printf("Case #%d: %d\n",t++,O_count);
        T--;
    }
    return 0;
}


Input : 
2
5 10
102 102

output:  
Case #1: 5
Case #2: 1
