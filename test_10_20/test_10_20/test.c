#define _CRT_SECURE_NO_WARNINGS 1

import java.util.Arrays;

//    public static String toString(int[] array) {
//        String str ="[";
//        for(int i = 0; i<array.length; i++) {
//            str += array[i];
//            if(i != array.length-1) {
//                str += ",";
//            }
//            //System.out.println(array[i]);
//
//        }
//        str += "]";
//        return str;
//    }
public class TestDemo2 {

	public static int num_max(int[] array) {
		int max = array[0];
		for (int i = 1; i<array.length; i++) {
			if (max < array[i]) {
				max = array[i];
			}
		}
		return max;
	}
	public static int num_min(int[] array) {
		int min = array[0];
		for (int i = 1; i<array.length; i++) {
			if (min > array[i]) {
				min = array[i];
			}
		}
		return min;
	}
	public static double array_aver(int[] array) {
		int sum = 0;
		double aver = 0.0;
		for (int i = 0; i<array.length; i++) {
			sum += array[i];
		}
		aver = (double)sum / array.length;
		return aver;
	}

	public static void reverse_array(int[] array) {
		int i = 0;
		int j = array.length - 1;
		int tmp = 0;
		tmp = array[0];
		while (i<j) {
			array[i] = array[i + 1];
			i++;
		}
		array[i] = tmp;
	}
	public static int binarySearch(int[]array, int key, int left, int right) {

		while (left<right) {
			int mid = (left + right) >> 1;
			if (left >right) {
				return -1;
			}
			if (array[mid] == key) {
				return mid;
			}
			if (array[mid] > key) {
				binarySearch(array, key, left, mid - 1);
			}
			if (array[mid] < key) {
				binarySearch(array, key, mid + 1, right);
			}

		}
		return -1;
	}

	public static void bubbleSort(int[] array) {
		boolean flag = true;
		for (int i = 0; i<array.length - 1; i++) {
			for (int j = 0; j<array.length - 1 - i; j++) {
				flag = false;
				if (array[j] > array[j + 1]) {
					flag = true;
					int tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
				}
			}
			if (!flag) {
				break;
			}
		}
	}
	//    public static void main1(String[] args) {
	//        //int[] array = {1,4,2,5,3,6};
	//        //int[] array = {1,2,3,4,5,6};
	//        int max = 0;
	//        int min = 0;
	//        int ret = 0;
	//        double aver = 0.0;
	//        int key = 6;
	//        int left = 0;
	//       // int right = array.length-1;
	//
	//        int[] array = {1,2,3,4,5,6};
	//        for(int i = 0; i<array.length-1; i++) {
	//            System.out.println(array[i]);
	//        }
	//
	//        //System.out.println(Arrays.toString(array));
	//        max = num_max(array);
	//        min = num_min(array);
	//        aver = array_aver(array);
	//        //reverse_array(array);
	//        ret = binarySearch(array, key, left, right );
	//        bubbleSort(array);


	//        System.out.println(max);
	//        System.out.println(min);
	//        System.out.println(aver);
	//        //System.out.println(Arrays.toString(array));
	//       // System.out.println(ret);
	//        System.out.println(Arrays.toString(array));

	//   }

	public static void func1(int p) {
		p = 20;
	}
	public static void func2(int[] array) {
		array[0] = 8;
	}
	public static void main(String[] args) {
		int x = 10;
		int[] array = { 1, 2, 3, 4 };
		func1(x);
		func2(array);
		System.out.println(x);
		System.out.println(array[0]);
	}
}


