
#define MAXROWS 100
#define MAXCOLS 100

typedef struct
{
    int rows, cols;
    int table[MAXROWS][MAXCOLS];
} Matrix;

void initMatrix(Matrix *m, int nRows, int nCols);
void printMatrix(Matrix *m);
