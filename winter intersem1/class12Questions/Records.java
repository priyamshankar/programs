class Record {
    protected String n[];
    protected int m[];
    protected int size;

    public Record(int cap) {
    }

    public void readarray() {
    }

    public void display() {
    }
}

class Highest extends Record {
    private int ind;

    public Highest(int cap) {
        super(cap);
    }

    public void find() {
        ind = 0;
        for (int i = 0; i < size; i++) {
            if (m[i] > m[ind]) {
                ind = i;
            }
        }
    }

    public void display() {
        super.display();
        System.out.println("Highest marks are::" + m[ind]);
        System.out.println("Students who score the highest marks are::");
        for (int i = 0; i < size; i++) {
            if (m[i] == m[ind])

            {
                System.out.println(n[i]);
            }
        }
    }
}
