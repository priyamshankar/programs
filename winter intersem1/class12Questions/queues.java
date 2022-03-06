class Queue {
    private int[] Que;
    private int front;
    private int rear;
    private boolean full;

    Queue(int capacity) {
        Que = new int[capacity];
        front = rear = 0;
        full = false;
    }

    void addele(int item) {
        System.out.println(front + " " + rear + " add element");
        if (front == (rear + 1) % Que.length) {
            if (full == false) {
                Que[rear] = item;
                System.out.println("The last element added to the Queue");
                full = true;
                return;
            }
            System.out.println(front + " " + " rear " + "The Queue is full");
            return;
        }

        Que[rear] = item;
        rear = (rear + 1) % Que.length;

    }

    void display() {
        // System.out.println(front+" "+rear+" display element");
        if (front == rear) {
            if (full == true) {
                System.out.println(Que[rear]);
                return;
            }
            System.out.println("The Queue is empty");
            return;
        }
        int i = 0;
        for (i = front; i != rear; i = (i + 1) % Que.length) {
            System.out.print(Que[i] + " ");
        }
        // System.out.print(Que[i]+" ");
        System.out.println();
    }

    int delete() {
        System.out.println(front + " " + rear + " del element");
        if (front == rear) {
            if (full == true) {
                full = false;
                return Que[rear];
            }
            System.out.println(full + " The Queue is empty");
            return -999999;
        }
        int x = Que[front];
        front = (front + 1) % Que.length;
        return x;
    }
}

class queues {
    public static void main(String[] args) {
        Queue q = new Queue(3);
        q.display();
        q.addele(67);
        q.addele(77);
        q.addele(79);
        // q.addele(79);
        q.display();

        // System.out.println(3%5);
        // q.addele(69);
        // q.addele(68);
        // q.addele(70);
        // q.addele(71);
        // q.addele(72);
        // q.addele(73);
        // q.display();
        // /*
        //  * System.out.println(q.delete());
        //  * System.out.println(q.delete());
        //  * System.out.println(q.delete());
        //  * System.out.println(q.delete());
        //  * System.out.println(q.delete());
        //  * System.out.println(q.delete());
        //  * System.out.println(q.delete());
        //  */
        // q.delete();
        // q.display();
        // q.delete();
        // q.display();
        // q.delete();
        // q.display();
        // q.delete();
        // q.display();
        // q.delete();
        // q.display();
        // q.delete();
        // q.display();
        // q.addele(73);
        // q.addele(74);
        // q.addele(75);
        // q.display();
    }
}