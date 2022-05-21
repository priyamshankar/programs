public class leadersInArray {

    void printLeaders(int arr[], int size) {
        int maxLeader = arr[size - i];
        System.out.println("The leaders of the array is : " + maxLeader + " ");

        for (int i = size - 2; i >= 0; i--) {
            if (maxLeader < arr[i]) {
                maxLeader = arr[i];
                System.out.println("the leader of the array is : " + maxLeader + " ");
            }
        }
    }

    public static void main(String[] args) {
        leadersInArray leader = new leadersInArray();
        int arr[] = new int[] { 16, 7, 4, 3, 5, 2 };
        int n = arr.length;
        leader.printLeaders(arr, n);
    }
}
