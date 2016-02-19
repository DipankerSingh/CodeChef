#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n;
        scanf("%lld",&n);

        long long islands[n][2];
        scanf("%lld%lld",&islands[0][0],&islands[0][1]);
        long long YcurrentMax=islands[0][1];
        long long YcurrentMin=islands[0][1];
        long long currentTopIsland=1;
        long long currentBottomIsland=1;
        long long currentRightMost=1;
        long long currentLeftMost=1;
        long long currentTopRight=1;
        long long currentBottomLeft=1;
        for(int j=1;j<n;j++)
        {
            scanf("%lld%lld",&islands[j][0],&islands[j][1]);
            if(islands[j][0]<islands[currentLeftMost-1][0])
            {
               currentLeftMost=j+1;
            }
            if(islands[j][0]>islands[currentRightMost-1][0])
            {
               currentRightMost=j+1;
            }
            if(YcurrentMax<islands[j][1])
            {
                YcurrentMax=islands[j][1];
                currentTopIsland=j+1;
                currentTopRight=j+1;
            }
            if(YcurrentMin>islands[j][1])
            {
                YcurrentMin=islands[j][1];
                currentBottomIsland=j+1;
                currentBottomLeft=j+1;
            }
            if(YcurrentMax==islands[j][1])
            {
                if(islands[currentTopIsland-1][0]>islands[j][0])
                {
                    currentTopIsland=j+1;

                }
                if(islands[currentTopRight-1][0]<islands[j][0])
                {
                    currentTopRight=j+1;
                }
            }
            if(YcurrentMin==islands[j][1])
            {
                if(islands[currentBottomIsland-1][0]<islands[j][0])
                {
                    currentBottomIsland=j+1;
                }
                if(islands[currentBottomLeft-1][0]>islands[j][0])
                {
                    currentBottomLeft=j+1;
                }
            }
        }

        //cout<<currentBottomIsland<<currentLeftMost<<currentRightMost<<currentTopIsland<<currentTopRight<<currentBottomLeft;

        if(islands[currentTopIsland-1][0]==islands[currentBottomIsland-1][0])
        {
            if(islands[currentLeftMost-1][0]==islands[currentTopIsland-1][0])
            {
                printf("1\n%lld SE\n",currentTopIsland);
            }
            else if(islands[currentLeftMost-1][0]<islands[currentTopIsland-1][0])
            {
                if(islands[currentRightMost-1][0]==islands[currentBottomIsland-1][0])
                {
                    printf("1\n%lld NW\n",currentBottomIsland);
                }
                else
                {

                    if(islands[currentBottomLeft-1][0]==islands[currentLeftMost-1][0])
                    {
                        printf("1\n%lld NE\n",currentBottomLeft);

                    }
                    else if(islands[currentTopRight-1][0]==islands[currentRightMost-1][0])
                    {
                        printf("1\n%lld SW\n",currentTopRight);
                    }
                    else
                    {
                    printf("2\n%lld SE\n",currentTopIsland);
                    printf("%lld NW\n",currentBottomIsland);
                    }
                }
            }
        }
        else if(islands[currentBottomIsland-1][0]>islands[currentTopIsland-1][0])
        {
            if(islands[currentLeftMost-1][0]==islands[currentTopIsland-1][0])
            {
                printf("1\n%lld SE\n",currentTopIsland);
            }
            else if(islands[currentLeftMost-1][0]<islands[currentTopIsland-1][0])
            {
                if(islands[currentRightMost-1][0]==islands[currentBottomIsland-1][0])
                {
                    printf("1\n%lld NW\n",currentBottomIsland);
                }
                else
                {
                    if(islands[currentBottomLeft-1][0]==islands[currentLeftMost-1][0])
                    {
                        printf("1\n%lld NE\n",currentBottomLeft);

                    }
                    else if(islands[currentTopRight-1][0]==islands[currentRightMost-1][0])
                    {
                        printf("1\n%lld SW\n",currentTopRight);
                    }
                    else
                    {
                    printf("2\n%lld SE\n",currentTopIsland);
                    printf("%lld NW\n",currentBottomIsland);
                    }
                }
            }
        }
        else
        {
            if(islands[currentLeftMost-1][0]==islands[currentBottomIsland-1][0])
            {
                printf("1\n%lld NE\n",currentBottomIsland);
            }
            else if(islands[currentLeftMost-1][0]<islands[currentTopIsland-1][0])
            {
                if(islands[currentRightMost-1][0]==islands[currentTopIsland-1][0])
                {
                    printf("1\n%lld SW\n",currentTopIsland);
                }
                else
                {
                    if(islands[currentBottomLeft-1][0]==islands[currentLeftMost-1][0])
                    {
                        printf("1\n%lld NE\n",currentBottomLeft);
                    }
                    else if(islands[currentTopRight-1][0]==islands[currentRightMost-1][0])
                    {
                        printf("1\n%lld SW\n",currentTopRight);
                    }
                    else
                    {
                    printf("2\n%lld SW\n",currentTopIsland);
                    printf("%lld NE\n",currentBottomIsland);
                    }
                }
            }

        }
    }
}
