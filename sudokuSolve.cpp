98i#include <iostream>
using namespace std;

#define YU 9

//SillyGirl_1998
//hotshott_22 


//CONTROL 1.2
//31-5-2020 ; 0923HR



//edit this matrix to see changes in ans
int mat[9][9] = {
    {6,5,0,8,7,3,0,9,0},
    {0,0,3,2,5,0,0,0,8},
    {9,8,0,1,0,4,3,5,7},
    {1,0,5,0,0,0,0,0,0},
    {4,0,0,0,0,0,0,0,2},
    {0,0,0,0,0,0,5,0,3},
    {5,7,8,3,0,1,4,2,6},
    {2,0,0,0,4,8,9,0,0},
    {0,9,0,6,2,5,0,8,1}
};


int nu(int *row, int *col)
{
    int nu = 0;
    int i,j;
    for(i=0;i<YU;i++)
    {
        for(j=0;j<YU;j++)
        {

            if(mat[i][j] == 0)
            {

                *row = i;
                *col = j;
                nu = 1;
                return nu;
            }
        }
    }
    return nu;
}

int is(int n, int r, int c)
{
    int i,j;
    
    for(i=0;i<YU;i++)
    {
        
        if(mat[r][i] == n)
            return 0;
    }
    
    for(i=0;i<YU;i++)
    {    
        if(mat[i][c] == n)
            return 0;
    }

    int rot = (r/3)*3;
    int cot = (c/3)*3;
    for(i=rot;i<rot+3;i++)
    {
        for(j=cot;j<cot+3;j++)
        {
            if(mat[i][j]==n)
                return 0;
        }
    }
    return 1;
}


int solve()
{
    int row;
    int col;

    if(nu(&row, &col) == 0)
        return 1;
    int n,i;

    for(i=1;i<=YU;i++)
    {

        if(is(i, row, col))
        {
            mat[row][col] = i;
            if(solve())
                return 1;
           
            mat[row][col]=0;
        }
    }
    return 0;
}

int main()
{
    if (solve())
    {
        for(int i=0;i<YU;i++)
        {
            for(int j=0;j<YU;j++)
            {
                cout<<mat[i][j]<<" ";
            }
        cout<<endl<<endl;
        }
    }
    else
        cout<<"NOT POSSIBLE!!!!!"<<endl;
    return 0;
}
