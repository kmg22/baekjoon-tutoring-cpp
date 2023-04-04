#include <iostream>
#define MAX 100
using namespace std;

void input_Matrix(int* p, int N, int M)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> *p++;
        }
        p += (MAX - M);
    }
}

void print_Matrix(int* p, int N, int M)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << *p++ << " ";
        }
        p += (MAX - M);
        cout << endl;
    }
}

void add_Matrix(int *p3, int *p1, int *p2, int N, int M)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            int add = (*p1++) + (*p2++);
            *p3++ = add;
        }
        p1 += (MAX - M);
        p2 += (MAX - M);
        p3 += (MAX - M);
    }
}

int main(void)
{
    int N = 0, M = 0;
    cin >> N >> M;
    int mat1[MAX][MAX] = { 0, };
    int mat2[MAX][MAX] = { 0, };
    int res[MAX][MAX] = { 0, };
    int* p1 = mat1[0];
    int* p2 = mat2[0];
    int* p3 = res[0];
    input_Matrix(p1, N, M);
    input_Matrix(p2, N, M);
    p1 = mat1[0];
    p2 = mat2[0];
    add_Matrix(p3, p1, p2, N, M);
    print_Matrix(p3, N, M);
    return 0;
}