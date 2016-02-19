#include<iostream>
using namespace std;
int main()
{    int left=0,right=4,up=0,bottom=4;
    int n;
    cin>>n;
    while(n--)
    {
        cout<<n+1<<endl;
        char input[38];
        cin>>input;
        int grid[5][5]={0};
        for(int i=0;i<38;i++)
        {
            if(input[i]=='V')
            {

                if(grid[left][up]==0)
                {
                grid[left][up]=input[i+1];
                grid[left][up+1]=input[i+2];
                i=i+2;
                left=left+1;
                if(left>right)
                        {
                            left=0;
                            up=up+1;

                        }

                }
                else
                {
                    while(grid[left][up]!=0)
                    {
                        left++;
                        if(left>right)
                        {
                            left=0;
                            up=up+1;

                        }
                    }
                    grid[left][up]=input[i];
                    grid[left][up+1]=input[i+1];
                    i=i+2;
                    left=left+1;
                    if(left>right)
                        {
                            left=0;
                            up=up+1;

                        }

                }

            }
            else if(input[i]=='S')
            {
                grid[left][up]=input[i+1];
                i=i+1;
                left=left+1;
                if(left>right)
                {
                    left=0;
                    up=up+1;
                }
            }
            else if(input[i]=='H')
            {
                if (grid[left][up]==0)
                {
                    grid[left][up]=input[i];
                    grid[left+1][up]=input[i+1];
                    left=left+2;
                    if(left>right)
                    {
                        left=0;
                        up=up+1;
                    }

                }
                else
                {
                    while(grid[left][up]!=0)
                    {
                        left++;
                        if(left>right)
                        {
                            left=0;
                            up=up+1;
                        }

                    }
                    grid[left][up]=input[i];
                    grid[left+1][up]=input[i+1];
                    i=i+2;
                    left=left+2;
                    if(left>right)
                    {
                        left=0;
                        up=up+1;
                    }
                }
            }
        }


        int currentSum=0;
        for(int row=0;row<5;row++)
        {
            for(int col=0;col<5;col++)
            {
                cout<<grid[row][col];
            }
            cout<<endl;
        }




    }

}
