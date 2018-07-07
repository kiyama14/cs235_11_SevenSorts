/***********************************************************************
 * Module:
 *    Week 11, Sort Heap
 *    Brother Helfrich, CS 235
 * Author:
 *    Mauricio Kiyama
 * Summary:
 *    This program will implement the Heap Sort
 ************************************************************************/

#ifndef SORT_HEAP_H
#define SORT_HEAP_H

template <class T>
class Heap {
private:
    T * array;
    int num;
    
    // PERCOLATE DOWN
    void percolateDown(int index) {
        int indexLeft = index * 2;
        int indexRight = indexLeft + 1;
        
        if (indexRight <= num
            && array[indexRight] > array[indexLeft]
            && array[indexRight] > array[index]) {
            
            swap(index, indexRight);
            percolateDown(indexRight);
        } else if (array[indexLeft] > array[index] && indexLeft <= num) {
            
            swap(index, indexLeft);
            percolateDown(indexLeft);
        }
    }
    
    void swap(int i1, int i2) {
        T temp = array[i1];
        
        array[i1] = array[i2];
        array[i2] = temp;
    }
    
    
public:
    
    // constructor
    Heap(T * array, int num) {
        this->array = array - 1;
        this->num = num;
    }
    
    // MARK: Heapify()
    void heapify() {
        
        for (int index = num/2; index >= 1; --index) {
            percolateDown(index);
        }
    }
    
    // MARK: Sort()
    void sort() {
        while (num > 1) {
            swap(1, num);
            num--;
            percolateDown(1);
        }
    }
};


/*****************************************************
 * SORT HEAP
 * Perform the heap sort
 ****************************************************/
template <class T>
void sortHeap(T array[], int num)
{
    Heap<T> h(array, num);
    h.heapify();
    h.sort();
}


#endif // SORT_HEAP_H
