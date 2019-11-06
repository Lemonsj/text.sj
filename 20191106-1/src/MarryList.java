import java.util.Arrays;

class MarryList {
    private int[] elem;
    private int usedSize;
    private final int CAPACITY = 10;
    public MarryList() {
        this.elem = new int [CAPACITY];
        this.usedSize = 0;
    }
    //打印顺序表
    public void display() {
        int i = 0;
        while(i < this.usedSize) {
            System.out.println(this.elem[i]);
            i++;
        }
    }

    private boolean isFull() {
        if(this.usedSize == this.elem.length) {
            return true;
        }
        return false;
       // return this.usedSize == this.elem.length;
    }
    //在POS位置新增元素
    public void add(int pos, int data) {
        if(isFull()) {
        }

        //二倍扩容
        this.elem = Arrays.copyOf(this.elem, this.elem.length*2);
        if(pos < 0 || pos > this.usedSize) {
            System.out.println("该位置不合法！");
        }
        for(int i = this.usedSize-1; i >= pos; i-- ) {
            this.elem[i+1] = this.elem[i];
        }
        this.elem[pos] = data;
        this.usedSize++;

    }
    //判断是否包含某个元素
    public boolean contains(int toFind) {
        for(int i = 0; i<this.usedSize; i++) {
            if(this.elem[i] == toFind) {
                return true;
            }
        }
        return false;
    }
    //查找某个元素对应的位置
    public int search(int toFind) {
        for(int i = 0; i < this.usedSize; i++) {
            if(this.elem[i] == toFind) {
                return i;
            }
        }
        return -1;
    }
    //获取pos位置的元素
    public int getpos(int pos) {
        if(pos < 0 || pos >= this.usedSize ) {
            System.out.println("该位置不存在!");
            return -1;
        }
        return this.elem[pos];

    }
    //给POS位置的元素设为value
    public void setPos(int pos, int value) {
        if(pos < 0 || pos >= this.usedSize ) {
            System.out.println("该位置不合法!");
        }
        this.elem[pos] = value;
    }

    //删除第一次出现的关键字
    public void remove(int toRemove) {
        int index = search(toRemove);
        if(index == -1) {
            System.out.println("找不到要删除的数字！");
            return;
        }
        for(int i = index; i <this.usedSize-1; i++) {
            this.elem[i] = this.elem[i+1];
        }
        this.usedSize--;
    }
    //获取顺序表长度
    public int size() {
        return this.usedSize;
    }
    //清空顺序表
    public void clear() {
        this.usedSize = 0;
    }

}
