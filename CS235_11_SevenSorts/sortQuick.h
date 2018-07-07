/***********************************************************************
 * Module:
 *    Week 11, Sort Quick
 *    Brother Helfrich, CS 235
 * Author:
 *    <author>
 * Summary:
 *    This program will implement the Quick Sort
 ************************************************************************/

#ifndef SORT_QUICK_H
#define SORT_QUICK_H

using namespace std;

/*****************************************************
 * SORT QUICK
 * Perform the quick sort
 ****************************************************/
template <class T>
void sortQuick(T array[], int num)
{
    if (num <= 1) {
        return;
    }
    int iEnd;
    int iDown = iEnd = num - 1;
    int iUp = 0;
    T pivotValue = array[iEnd/2];
    
    
    while (iUp <= iDown) {
        while (iUp <= iEnd && pivotValue > array[iUp]) {
            iUp++;
        }
        while (iDown >= 0 && array[iDown] > pivotValue) {
            iDown--;
        }
        if (iUp <= iDown) {
            swap(array[iUp++], array[iDown--]);
        }
    }
    
    sortQuick(array, iUp);
    sortQuick(array + iUp, iEnd - iUp + 1);
}




#endif // SORT_QUICK_H
