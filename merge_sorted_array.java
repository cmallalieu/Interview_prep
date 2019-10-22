import org.junit.Test;
import org.junit.runner.JUnitCore;
import org.junit.runner.Result;
import org.junit.runner.notification.Failure;

import static org.junit.Assert.*;

public class Solution {

    public static int[] mergeArrays(int[] myArray, int[] alicesArray) {

        // combine the sorted arrays into one large sorted array
        int length1 = myArray.length;
        int length2 = alicesArray.length;
        
        int mergedLength = myArray.length + alicesArray.length;
        
        int[] merged = new int[mergedLength];
        
        int arr1Index = 0;
        int arr2Index = 0;
        
        if (length1 == 0 && length2 == 0)
        {
            return merged;
        }
        else if (length1 == 0 && length2 != 0)
        {
            return alicesArray;
        }
        else if (length1 != 0 && length2 == 0)
        {
            return myArray;
        }
        
        for (int i = 0; i < mergedLength; i++)
        {
            int arr1Tmp = myArray[arr1Index];
            int arr2Tmp = alicesArray[arr2Index];
        
            if(arr1Tmp >= arr2Tmp)
            {
                merged[i] = arr1Tmp;
                arr1Index++;
            }
            else if (arr1Tmp < arr2Tmp)
            {
                merged[i] = arr2Tmp;
                arr2Index++;
            }
        }
        
        return merged;
    }
