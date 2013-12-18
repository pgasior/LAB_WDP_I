#include <stdio.h>
#include <stdlib.h>

double* createMatrix(int rowCount,int colCount)
{
    return (double*)malloc(rowCount*colCount*sizeof(double));
}
void setVal(int rowCount, int colCount, double* matrix, int row, int col,double val)
{
    *(matrix+row*colCount+col) = val;
}
double getVal(int rowCount, int colCount, double* matrix, int row, int col)
{
    return  *(matrix+row*colCount+col);
}
void printMatrix(int rowCount, int colCount, double* pMatrix)
{
    int row, col;
    for(row=0;row<rowCount;row++)
    {
	for(col=0;col<colCount;col++)
	    printf("%8.1lf",getVal(rowCount,colCount,pMatrix,row,col));
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
double* product(int m1rowCount,int m1colCount,int m2rowCount,int m2colCount,double* m1, double* m2)
{
    int i,j,k,s =0;
    double* m3 = createMatrix(m1rowCount,m2colCount);
    for(i=0;i<m1rowCount;i++)
    {
	for(j=0;j<m2colCount;j++)
	{
	    s=0;
	    for(k=0;k<m1colCount;k++)
	    {
		s+=getVal(m1rowCount,m1colCount,m1,i,k)*getVal(m2rowCount,m2colCount,m2,k,j);

	    }
	    setVal(m1rowCount,m2colCount,m3,i,j,s);
	}
    }
    return m3;
}
int main()
{
    double* m1,*m2;
    int m1rowCount=0,m1colCount=0,m2rowCount=0,m2colCount=0;
    m1=loadMatrix("m1.txt",&m1rowCount,&m1colCount);
    m2=loadMatrix("m2.txt",&m2rowCount,&m2colCount);
    printf("m1:\n");
    printMatrix(m1rowCount,m1colCount,m1);
    printf("\nm2:\n");
    printMatrix(m2rowCount,m2colCount,m2);
    printf("\n");
    if(m1colCount==m2rowCount)
    {
	double* m3 = product(m1rowCount,m1colCount,m2rowCount,m2colCount, m1,m2);
	printf("m1*m2:\n");
	printMatrix(m1rowCount,m2colCount,m3);
	free(m3);
    }
    else
	printf("Nie mozna pomnozyc tych macierzy");
    free(m1);
    free(m2);
    return 0;
}
