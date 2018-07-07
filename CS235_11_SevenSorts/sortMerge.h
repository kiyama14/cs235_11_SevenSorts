/***********************************************************************
 * Module:
 *    Week 11, Sort Merge
 *    Brother Helfrich, CS 235
 * Author:
 *    <author>
 * Summary:
 *    This program will implement the Merge Sort
 ************************************************************************/

#ifndef SORT_MERGE_H
#define SORT_MERGE_H

#include <list>
using namespace std;

/*****************************************************
 * SORT MERGE
 * Perform the merge sort
 ****************************************************/
template <class T>
void sortMerge(T array[], int num)
{
    list<T> data;
    
    for (int i = 0; i < num; i++) {
        data.push_back(array[i]);
    }
    
    
    
}

template <class T>
void merge(list<T> array) {

}

template <class T>
void split() {

}


#endif // SORT_MERGE_H
