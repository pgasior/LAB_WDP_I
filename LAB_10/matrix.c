#include <stdio.h>
#include <stdlib.h>

double* createMatrix(int rowCount,int colCount)
{
    return (double*)malloc(rowCount*colCount*sizeof(double));
}
void setVal(int rowCount, int colCount, double* matrix, int row, int col,double val)
{
    *(matrix+row*rowCount+col) = val;
}
double getVal(int rowCount, int colCount, double* matrix, int row, int col)
{
    return  *(matrix+row*rowCount+col);
}
void printMatrix(int rowCount, int colCount, double* pMatrix)
{
    int row, col;
    for(row=0;row<rowCount;row++)
    {
	for(col=0;col<colCount;col++)
	    printf("%5.1lf",getVal(rowCount,colCount,pMatrix,row,col));
	printf("\n");
    }
}
void saveMatrix(char* filename,int rowCount, int colCount, double* pMatrix)
{
    FILE *f;
    int row, col;
    f=fopen(filename,"w");
    fprintf(f,"%d  %d",rowCount,colCount);
    for(row=0;row<rowCount;row++)
    {
	for(col=0;col<colCount;col++)
	    fprintf(f,"%lf",getVal(rowCount,colCount,pMatrix,row,col));
	fprintf(f,"\n");
    }
    fclose(f);
}
double* loadMatrix(char* filename,int* pRowCount, int* pColCount)
{
    FILE *f;
    int row, col;
    f=fopen(filename,"r");
    fscanf(f,"%d",pRowCount);  
    fscanf(f,"%d",pColCount);
    printf("rowCount: %d\ncolCount: %d\n",*pRowCount,*pColCount);
    double* result=createMatrix(*pRowCount,*pColCount);
    double val;
    for(row=0;row<*pRowCount;row++)
    {
	for(col=0;col<*pColCount;col++)
	{
	    fscanf(f,"%lf",&val);
	    setVal(*pRowCount,*pColCount,result,row,col,val);
	}
	
    }
    fclose(f);
    return result;
}
int main()
{
    double* p1;
    int rowCount,colCount;
    p1=loadMatrix("Dane.txt",&rowCount,&colCount);
    printMatrix(rowCount,colCount,p1);
    return 0;
}
