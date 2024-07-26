public class LinearSearch {
    
    static boolean linearSearch(int[] arr, int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int arr[] = {2, 4, 6, 8, 10};
        int size = 5;
        int target = 10;

        boolean ans = linearSearch(arr, size, target);
        if (ans) {
            System.out.println("Target found");
        } else {
            System.out.println("Target not found");
        }
    }
}
