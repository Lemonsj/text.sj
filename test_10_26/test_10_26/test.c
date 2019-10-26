//#define _CRT_SECURE_NO_WARNINGS 1
//
//import java.util.Arrays;
//
//class MyArrayList {
//	private int[] elem;
//	private int usedSize;
//	private final int CAPACITY = 10;
//	//构造函数--》没有返回值
//	public MyArrayList() {
//		this.elem = new int[CAPACITY];
//		this.usedSize = 0;
//	}
//	public void display() {
//		for (int i = 0; i<this.usedSize; i++) {
//			System.out.println(this.elem[i] + " ");
//		}
//	}
//	private boolean isFull() {
//		/* if(this.usedSize == this.elem.length) {
//		return true;
//		}
//		return false;*/
//		return this.usedSize == this.elem.length;
//	}
//	public void add(int pos, int data) {
//		int i = 0;
//		if (pos <0 || pos >this.usedSize) {
//			return;
//		}
//		if (isFull()) {
//			//二倍扩容
//			this.elem = Arrays.copyOf(this.elem, this.elem.length * 2);
//		}
//		for (i = this.usedSize - 1; i >= pos; i--) {
//			this.elem[i + 1] = this.elem[i];
//		}
//		this.elem[pos] = data;
//		this.usedSize++;
//	}
//	public int search(int toFind) {
//		for (int i = 0; i<this.usedSize; i++) {
//			if (this.elem[i] == toFind) {
//				return i;
//			}
//		}
//		return -1;
//	}
//	public int getpos(int pos) {
//		if (pos <0 || pos >this.usedSize) {
//			return -1;
//		}
//
//		return this.elem[pos];
//	}
//	public int size() {
//		if (this.usedSize > 0) {
//			return this.usedSize;
//		}
//		return 0;
//	}
//	public void remove(int toRemove) {
//		int index = search(toRemove);
//		if (index == -1) {
//			System.out.println("找不到该数字！");
//		}
//		for (int i = index; i<this.usedSize; i++) {
//			this.elem[i] = this.elem[i + 1];
//		}
//		this.usedSize--;
//	}
//}
//
//
//
///*class Person {
////属性
//public String name = "wangchenyi";
//public int age = 21;
//public static int count;
//public final int SIZE = 88;
//public static final int SIZE2 = 99;
////行为
//public void eat() {
//System.out.println("睡觉");
//}
//public void show() {
//System.out.println("name:" + name + "age :" + age);
//}
//}
//public class TestDemo {
//public static void main(String[] args) {
////实例化一个对象  new
//Person person = new Person();
//System.out.println(person.name);
////person.show();
//}
//}*/
//
//public class TestDemo {
//	public static void main(String[] args) {
//		MyArrayList myArrayList = new MyArrayList();
//		myArrayList.add(0, 5);
//		myArrayList.add(1, 6);
//		myArrayList.add(2, 6);
//		myArrayList.add(0, 12);
//		myArrayList.display();
//	}
//}