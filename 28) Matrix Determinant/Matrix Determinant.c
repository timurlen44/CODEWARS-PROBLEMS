#include <stddef.h>
#include <math.h>

void fillMinorMatrix(size_t size, const int matrix[size][size], size_t rowIndexOfTheElementWhoseMinorMatrixIsToBeFound, size_t colIndexOfTheElementWhoseMinorMatrixIsToBeFound, int minorMatrix[size-1][size-1])
{
    size_t rowIndexOfMatrix = 0; // row    index
    size_t colIndexOfMatrix = 0; // column index

    size_t rowIndexOfMinorMatrix = 0; // row    index
    size_t colIndexOfMinorMatrix = 0; // column index



    for(rowIndexOfMinorMatrix = 0, rowIndexOfMatrix = 0; rowIndexOfMatrix < size; rowIndexOfMatrix++)
    {

        if(rowIndexOfTheElementWhoseMinorMatrixIsToBeFound == rowIndexOfMatrix)
        {
            continue;
        }

        for(colIndexOfMinorMatrix = 0,colIndexOfMatrix = 0; colIndexOfMatrix < size; colIndexOfMatrix++)
        {
            if(colIndexOfTheElementWhoseMinorMatrixIsToBeFound == colIndexOfMatrix)
            {
                continue;
            }

            minorMatrix[rowIndexOfMinorMatrix][colIndexOfMinorMatrix] = matrix [rowIndexOfMatrix][colIndexOfMatrix];

            colIndexOfMinorMatrix++;

        }

        rowIndexOfMinorMatrix++;

    }

}

int determinant(size_t size, const int matrix[size][size])
{
    int result = 0;
    if(size <= 0)
    {
        return result;
    }

    switch(size)
    {
    case 1:
        result = matrix[0][0];
        break;
    case 2:
        result = matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
        break;
    default:
        //I use the first row elements's minors to find determinant
        for(int matrixRowIndex = 0, matrixColIndex = 0; matrixColIndex < size; matrixColIndex++)
        {
            int tempMinorMatrix[size-1][size-1];
            fillMinorMatrix(size,matrix,matrixRowIndex,matrixColIndex,tempMinorMatrix);
            //determinant =  minor element * (-1)^(minor's row + minor's col) * determinant(minor matrix)
            result += matrix[matrixRowIndex][matrixColIndex]* pow(-1,(matrixRowIndex + matrixColIndex)) * determinant(size-1,tempMinorMatrix);
        }
    }

    return result;
}
