
#include <QDebug>
#include "stack.h"


const int ASIZE = 1000000;

Stack<int> S;

void testSeq(int *A, int size){
    for (int i=0; i<size; i++) S.push(A[i]);
    qDebug() << "After " << size << " push operations, size:" << S.getSize();
}


int main(int argc, char *argv[]) {
    int A[ASIZE];
    for (int i=0; i<ASIZE; i++) A[i] = rand()%10000;
    testSeq(A,ASIZE);
    return 0;
}
